
// POINTERS

#include <iostream>
using namespace std;
#include <list>

int main()
{
  int n = 5;
  cout << &n << endl; // n devuelve 5 pero, &n devuelve 0x7fffe83d1824. psysical address.

  // we crete a pointer
  int* ptr = &n;
  cout << ptr << endl;
  cout << *ptr << endl;
  *ptr = 10;
  cout << *ptr << endl;
  cout << n << endl;
  
  int v;
  int* ptr2=&v;
  *ptr2 = 7;
  cout << "v=" << v << endl;
  



  return 0;

}
