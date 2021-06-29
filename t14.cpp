


#include <iostream>
using namespace std;
void introduceMe(string name,string city,int age=0){
  cout << "My name is "<<name << endl;
  cout << "I am from  "<<city << endl;
  if(age!=0)
    cout << "I am  "<<age << " years old" <<  endl;
  
  
}
int main()
{
  introduceMe("German", "Corrientes");
  introduceMe("German", "Corrientes",33);
  
  
}
