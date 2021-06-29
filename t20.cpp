
// POINTERS
// void pointer+ can hold any type. you cannot referent directly.
#include <iostream>
using namespace std;
#include <list>
void printNumber(int* numberPtr){
  cout << *numberPtr << endl; // Muestra el valor que contiene el address pointer.
};
void printChar(char* charPtr){
  cout << *charPtr << endl; // Muestra el valor que contiene el address pointer.
};
void print(void *ptr, char type){
  switch(type){
  case 'i':  cout << *((int*)ptr) << endl; break; // handle int* 
  case 'c':  cout << *((char*)ptr) << endl; break;// handle char*
   
  
  
  };
};
int main()
{
  int number = 5;
  char letter = 'a';

  cout << *(&number) << endl; 
  printNumber(&number);

  printChar(&letter);
  cout<<"------------"<<endl;
  print(&number,'i');
  print(&letter,'c');
  
  return 0;

}
