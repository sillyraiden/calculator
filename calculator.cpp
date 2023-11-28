#include <iostream>
#include <conio.h>
using namespace std;
 
int main() {
 
  //definitions
  char iop;
  int number1;
  int number2;
  int result;
 
  //start/main screen
  cout << "Enter your first number: ";
  cin >> number1;
  cout << "Enter your operator (+-*/): ";
  cin >> iop;
  cout << "enter your second number: ";
  cin >> number2;
 
  switch (iop)
  {
  case '+':
    result = number1 + number2;
    cout << result;
 
  case '-':
    result = number1 - number2;
    cout << result;
 
  case '*':
    result = number1 * number2;
    cout << result;
 
  case '/':
    result = number1 / number2;
    cout << result;
 
  default:
    cout << "ERROR!";
    break;
  }
 
  _getch();
  return 0;
}
