

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  // draw triangle
  int length;
  cout << "Length:";
  cin >> length;
  char symbol;
  cout << "Symbol:";
  cin >> symbol;
  for(int i =1;i<=length; i++){
      for(int j=1; j<=i;j++){
          cout << setw(3) << symbol;
      }
      cout<<endl;
  }
  cout<<endl<<endl<<endl;
  for(int i =length;i>=1; i--){
      for(int j=1; j<=i;j++){
          cout << setw(3) << symbol;
      }
      cout<<endl;
  }
  
}