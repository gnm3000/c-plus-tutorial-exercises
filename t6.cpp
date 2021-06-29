
#include <iostream>
using namespace std;
int main()
{
  // user enter sides a triangle
  // classify equilateral,isoseles
  float a,b,c;
  cout << " enter a b c";
  cin >> a >> b >> c;
  if(a==b && b==c){
      cout<< "it is a equilateral trinagle";
  }else{
      if(a!=b  && a !=c  && b!=c)
          cout<< "scalene triangle";
      else
          cout << "issoseles triangle";
      
  }
    
    
}