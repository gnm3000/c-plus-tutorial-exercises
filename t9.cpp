
#include <iostream>
using namespace std;
int main()
{
  int usersPin = 1234, pin,errorCounter=0;

  do
  {
    /* code */
    cout << "Enter the pin ";
    cin >> pin;
        if (pin==usersPin) {
          cout << "perfect" << endl;
        }else{
          cout << ++errorCounter << "errors" << endl ;
          
        }
      
    
  } while ((pin!=usersPin) && (errorCounter<=3));
  if(errorCounter>=3){
    cout << "Maximo 3 intentos";
  }

  

}