#include <iostream>
using namespace std;

int quickSort(int list[10], int first, int last)
{
  int pivot, i, j, temp;

  if (first < last)
  {
    pivot = first;
    i = first;
    j = last;

    while (i < j)
    {
      while (list[i] <= list[pivot] && i < last)
      {
        i++;
      }
      while (list[j] > list[pivot])
      {
        j--;
      }

      if (i < j)
      {
        temp = list[i];
        list[i] = list[j];
        list[j] = temp;
      }
    }

    temp = list[pivot];
    list[pivot] = list[j];
    list[j] = temp;
    quickSort(list, first, j - 1);
    quickSort(list, j + 1, last);
  }
}

int main()
{
  int list[20], size, i;

  cout << "Enter size of the list: ";
  cin >> size;

  cout << "Enter integer values: ";
  for (i = 0; i < size; i++)
  {
    cin >> list[i];
  }

  quickSort(list, 0, size - 1);

  cout << "List after sorting is: " << endl;
  for (i = 0; i < size; i++)
  {
    cout << list[i] << "    ";
  }
}