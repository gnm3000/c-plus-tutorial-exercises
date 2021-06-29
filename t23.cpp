
// POINTERS
// void pointer+ can hold any type. you cannot referent directly.
#include <iostream>
using namespace std;

int main()
{
  int size;
  cout << "Size;";
  cin >> size;

  //int myArray[size];
  int * myArray = new int[size];
  
  for (int i=0;i<size;i++){
    cout << "Array[" << i << "]";
    cin >> myArray[i];
  }
  for (int i=0;i<size;i++){
    cout << *(myArray+1) << " ";
  }
  delete[]myArray;
  myArray=NULL;
  return 0;

}
