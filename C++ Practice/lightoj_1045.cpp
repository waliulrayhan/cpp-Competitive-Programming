#include <iostream>
using namespace std;

string conv(long long int decimal, long long int base){
    if(decimal == 0) return "0";
    char NUMS[] = "0123456789"; 
    string result = "";
    do{
        result.push_back(NUMS[decimal%base]);
        
        decimal /= base; 
    }while(decimal != 0); 
    
    string x = string(result.rbegin(), result.rend());
        return x;
}

int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    // {
        long long int n, b;
        cin>>n>>b;

        if(n==0)
        {
            //cout<<"Case "<<t<<": "<<1<<endl;
        }
        else
        {
            cout<<conv(n, b);
        }

    //}

}

// int main(void){
//     std::cout << "Binary\tOctal\tDecimal\tHexidecimal"<< std::endl;
//     std::cout << conv(50, 2) << '\t' << conv(50, 8) << '\t';
//     std::cout << conv(50, 10) << '\t' << conv(50, 16);

//     return 0;
// }

// std::string conv(int decimal, int base){
//     if(decimal == 0) return "0";
//     char NUMS[] = "0123456789"; 
//     std::string result = "";
//     do{
//         result.push_back(NUMS[decimal%base]);
        
//         decimal /= base; 
//     }while(decimal != 0); 
    
//     return std::string(result.rbegin(), result.rend());
// }