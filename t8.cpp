
#include <iostream>
using namespace std;
int main()
{
  float num1,num2;
  char operation;
  cout << "Calculator system: ";
  cin >> num1 >> operation>> num2;
  switch (operation)
  {
  case '-': cout << num1 << operation << num2 << "=" << num1-num2; break;
  case '+': cout << num1 << operation << num2 << "=" << num1+num2; break;
  default:
    cout<<"Not valid operation" << endl;
  }
  cout << "\n";
  (num1==num2) ? cout << " same" : cout << "different";

  int counter = 100;
  while (counter<=500){
    counter++;
  }
  cout << "End";

    
}