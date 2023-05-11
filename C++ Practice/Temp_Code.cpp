#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;
class Book
{
public:
    int ID;
    string type, name, writer;
    bool Available;

    string can_be_available()
    {
        if (Available) return "YES";
        else return "NO";
    }
    Book(int ID, const string &name, const string &writer, const string &type, bool Available) : ID(ID), name(name), writer(writer), type(type), Available(Available) {}
};

class Student
{
public:

    string roll, className, name;

    Student(const string &roll, const string &className, const string &name) : roll(roll), className(className), name(name) {}

};

class Date
{
public:
    int year, month, day;

    string getDate()
    {
        return to_string(day) + "-" + to_string(month) + "-" + to_string(year);
    }

    Date(int day, int month, int year) : day(day), month(month), year(year) {}
};

class Book_Borrow
{
public:

    int ID;
    Date issueDate, expectedReturnDate;
    Book givenBook;
    Student student;

    Book_Borrow(int ID, const Date &issueDate, const Date &expectedReturnDate, const Book &givenBook, const Student &student) : ID(ID), issueDate(issueDate), expectedReturnDate(expectedReturnDate),givenBook(givenBook), student(student) {}
};

class Library
{
public:
    vector<Book> allBooks;
    vector<Book_Borrow> allBorrowedBooks;

    void initBooksList()
    {
        Book b1 = Book(0, "Adventures of Sherlock Holmes", "Sir Arthur Conan Doyle", "Novel", true);
        Book b2 = Book(1, "Adventures of Tom Sawyer", "Mark Twain", "Crime", true);
        Book b3 = Book(2, "Ain-i-Akbari", "Abul Fazal", "Fiction", true);
        Book b4 = Book(3, "Alchemist", "Paulo Coelho", "Fiction", true);
        Book b5 = Book(4, "Calculas", "A.B. Abdur Rahman", "Mathematics", true);

        allBooks.push_back(b1);
        allBooks.push_back(b2);
        allBooks.push_back(b3);
        allBooks.push_back(b4);
        allBooks.push_back(b5);
    }

    void Show_all_book()
    {
        int i = 0;

        cout << "\tID" << "\tName" << "\t\tWriter Name" << "\tType" << "\t\tAvailable" << endl;
        cout << "__________________________________________________________________________________" << endl;

        for (Book b:allBooks)
        {
            cout << "\t" << i << "\t" << b.name << "\t" << b.writer << "\t" << b.type << "\t\t"<< b.can_be_available() << endl;
            i++;
        }
    }

    void Show_all_available_book()
    {
        int i = 0;

        cout << "\tID" << "\tName" << "\t\tWriter Name" << "\tType" << "\t\tAvailable" << endl;
        cout << "___________________________________________________________________________________" << endl;

        for (Book b:allBooks)
        {
            if (b.Available)
            {
                cout << "\t" << i << "\t" << b.name << "\t" << b.writer << "\t" << b.type << "\t\t" << b.can_be_available() << endl;
                i++;
            }
        }
    }

    void Book_insertion()
    {
        string name, writer, type;

        cout << "Please Enetr Book Name:";
        cin.ignore();
        getline(cin, name);

        cout << "Please Enter Writer Name:";
        getline(cin, writer);

        cout << "Please Enter Book Type:";
        cin >> type;

        Book newBook = Book(allBooks.size() + 1, name, writer, type, true);
        allBooks.push_back(newBook);

        cout << "Insertion Done!! Here is the New Books list:" << endl;
        Show_all_available_book();
    }

    void Book_Deletation()
    {
        int ID;
        cout << "Enter the ID of the Book that you want to delete:" << endl;

        Show_all_available_book();
        cin >> ID;

        allBooks.erase(allBooks.begin() + ID);
        cout << "Deletion Done! New Books list:" << endl;
        Show_all_available_book();
    }

    void Modification(Book b, string type)
    {
        string s;
        if (type == "Name")
        {
            cout << "What is the Current Name " << b.name << endl;
            cout << "Please Enter update Name: ";
            cin.ignore();
            getline(cin, s);
            b.name = s;
        }
        
        else if (type == "Writer")
        {
            cout << "What is the Current Writer Name " << b.writer << endl;
            cout << "Please Enter update Writer Name: ";
            cin.ignore();
            getline(cin, s);
            b.writer = s;
        }
        
        else if (type == "Type")
        {
            cout << "What Type of book it was " << b.type << endl;
            cout << "Enter update Type:";
            cin>>s;
            b.type = s;
        }

        allBooks[b.ID] = b;
        cout << "Modification done!! Here is the Updated Books List: " << endl;
        Show_all_available_book();
    }

    void Book_Modification()
    {
        int ID, option;
        cout << "Please Enter the ID of the Book that you want to Modify:" << endl;
        Show_all_available_book();

        cout << "Please Enter Book ID:";
        cin >> ID;

        Book b = allBooks.at(ID);
        cout << "Enter what you want to modify of " << b.name << " : " << endl;
        cout << "    For Name type 1" << endl;
        cout << "    For Writer Name type 2" << endl;
        cout << "    For Writer Name type 3" << endl;
        cout << "    For Writer Name type 4" << endl;
        cin >> option;

        if(option == 1) Modification(b, "Name");
        else if (option == 2) Modification(b, "Writer");
        else if (option == 3) Modification(b, "Type");
        else if (option ==4) Modification(b, "Type");
    }

    void Show_all_borrowed_book()
    {
        if(allBooks.size()==0)
        {
            cout << "No book borrowed yet!. Borrow a Book first"<<endl;
            return;
        }
        
        else
        {
            cout << "\tID" << "\tName" << "\t\tWriter Name" << "\tType" << "\t\tAvailable" << endl;
            for (Book b:allBooks) 
            {
                if (!b.Available) 
                {
                    cout << "\t" << b.ID << "\t" << b.name << "\t" << b.writer << "\t" << b.type << "\t\t" << b.can_be_available() << endl;
                }
            }
        }
    }

    void Student_who_can_borrow_book()
    {
        int ID, daysCount;
        string name, roll, className;
        Date issueDate = currentDate();

        cout << "Enter the ID of the Book that you want to Borrow: " << endl;
        Show_all_available_book();

        cout << "Enter Book ID:";
        cin >> ID;
        Book givenBook = allBooks.at(ID);
        cout << "Enter the Student info who want the book: " << endl;
        cout << "    Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "    Enter Roll: ";
        cin >> roll;
        cout << "    Enter Class: ";
        cin >> className;
        cout << "Enter, 'How many days for': ";
        cin >> daysCount;

        Student toWhom = Student(roll, className, name);
        int years = (int) (daysCount / 365);
        int days = (int) ((daysCount) % 365);
        int months = days / 30;
        days = days % 30;
        Date expectedReturnDate = Date(issueDate.day + days, issueDate.month + months, issueDate.year + years);
        Book_Borrow newBorrow = Book_Borrow(allBorrowedBooks.size(), issueDate, expectedReturnDate, givenBook, toWhom);
        allBorrowedBooks.push_back(newBorrow);
        Book_which_is_available(false, givenBook.ID);
        cout << "Borrowed done!! Here is the All Borrowed list:" << endl;
        Show_all_Borrow_book();
    }

    void Show_all_Borrow_book()
    {
        if(allBorrowedBooks.size()==0)
        {
            cout << "No book borrowed yet!. Borrow a Book first by clicking option '6'"<<endl;
            return;
        }
        
        else
        {
            cout << "\tID" << "\tRoll" << "\tStudent Name" << "\tClass" << "\tBook Name" << "\tWriter Name" << "\tBorrowed Date" << "\tExpected Return Date" << endl;
            cout << "___________________________________________________________________________________________________________" << endl;

            for (Book_Borrow Book_Borrow:allBorrowedBooks)
            {
                Student student = Book_Borrow.student;
                cout << "\t" << Book_Borrow.ID << "\t" << student.roll << "\t" << student.name << "\t"
                     << student.className
                     << "\t" << Book_Borrow.givenBook.name << "\t" << Book_Borrow.givenBook.writer << "\t"
                     << Book_Borrow.issueDate.getDate() << "\t" << Book_Borrow.expectedReturnDate.getDate() << endl;
            }
        }
    }

    void Book_which_is_available(bool Available, int bookId) 
    {
        Book returningBook = allBooks.at(bookId);
        returningBook.Available = Available;
        allBooks.at(returningBook.ID) = returningBook;
    }

    void Book_return()
    {
        int ID;
        cout << "Enter the ID of the Borrow that you want to Return: " << endl;
        Show_all_Borrow_book();
        cout << "Enter ID: ";
        cin >> ID;
        Book_which_is_available(true, allBorrowedBooks.at(ID).givenBook.ID);
        allBorrowedBooks.erase(allBorrowedBooks.begin() + ID);
        cout << "Return Done! " << endl;
        Show_all_available_book();
    }

    const Date currentDate()
    {
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);
        return Date(tm.tm_mday, tm.tm_mon, tm.tm_year + 1900);
    }

    void Show_book(Book b)
    {
        cout << "\tID" << "\tName" << "\t\tWriter Name" << "\tType" << "\t\tAvailable" << endl;
        cout << "____________________________________________________________________________________" << endl;
        cout << "\t" << b.ID << "\t" << b.name << "\t" << b.writer << "\t" << b.type << "\t\t" << b.can_be_available() << endl;
    }

    void Book_search()
    {
        string str;
        cout << "Enter Book name to search: ";
        cin.ignore();
        getline(cin, str);
        int count=0;
        string t = str;

        transform(t.begin(), t.end(), t.begin(), ::tolower);

        for (Book b:allBooks)
        {
            string check = b.name;
            transform(check.begin(), check.end(), check.begin(), ::tolower);
            if ( check == t)
            {
                count++;
                Show_book(b);
                break;
            }
        }
        if(count==0) cout<< "No book found named "<<str<<endl;
    }
};

int main()
{
    Library library;
    library.initBooksList();
    int menu;
    do {
        system("cls");
        cout<<"______________________________________________________________________________"<<endl;
        cout<<"_________________________Library Management System____________________________"<<endl;
        cout<<"==============================================================================="<<endl;
        cout << "Please Enter an option: "<<endl;
        cout << "\t1. Show All Books \t"<<endl;
        cout << "\t2. Search Book \t"<<endl;
        cout << "\t3. Add New Book \t"<<endl;
        cout << "\t4. Modify a Book \t"<<endl;
        cout << "\t5. Delete a Book \t"<<endl;
        cout << "\t6. Borrow Book to a Student \t"<<endl;
        cout << "\t7. All Borrow List \t"<<endl;
        cout << "\t8. Borrowed Books List \t"<<endl;
        cout << "\t9. Return Book to Library \t"<<endl;
        cout << "Enter your choice: ";

        cin >> menu;

        switch (menu)
        {
            case 1:
                library.Show_all_book();
                system("PAUSE");
                break;

            case 2:
                library.Book_search();
                system("PAUSE");
                break;

            case 3:
                library.Book_insertion();
                system("PAUSE");
                break;

            case 4:
                library.Book_Modification();
                system("PAUSE");
                break;

            case 5:
                library.Book_Deletation();
                system("PAUSE");
                break;

            case 6:
                library.Student_who_can_borrow_book();
                system("PAUSE");
                break;

            case 7:
                library.Show_all_Borrow_book();
                system("PAUSE");
                break;

            case 8:
                library.Show_all_borrowed_book();
                system("PAUSE");
                break;

            case 9:
                library.Book_return();
                system("PAUSE");
                break;

            default:
                cout << "You enter invalid input\nre-enter the input\n" << endl;
                break;
        }
    }
    
    while (true);
    
    return 0;
}