
// POINTERS
// void pointer+ can hold any type. you cannot referent directly.
#include <iostream>
using namespace std;

int main()
{
  /*
  int luckyNumber[5] = {2,3,4,5,6};
  cout << luckyNumber << endl;
  cout << *(luckyNumber+2) << endl;
  
  cout << &luckyNumber[0] << endl;
  cout << &luckyNumber[1] << endl;
  cout << &luckyNumber[2] << endl;
  cout << &luckyNumber[3] << endl;
  cout << &luckyNumber[4] << endl;
  */
  int luckyNumber[5];
  for (int i=0; i<=4;i++){
    cout << "Number: ";
    cin >> luckyNumber[i];
  };
  
  for (int i=0; i<=4;i++){
    cout << *(luckyNumber+i) << endl;
  };
  return 0;

}
