
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  // draw rectangule
  int height,width;
  // MINUTO 5:30:23 . https://www.youtube.com/watch?v=GQp1zzTwrIg
  cout << "Height: ";
  cin >> height;
  cout << "Width: ";
  cin >> width;
  char symbol;
  cout << "Symbol: ";
  cin >> symbol;

  for (int h=0;h<height;h++){
    for (int w=0; w< width; w++){
      cout << setw(5) << symbol;
    }
    cout << endl;
  }
  
}