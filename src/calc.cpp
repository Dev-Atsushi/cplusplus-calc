#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
  int firstNumber;
  int secondNumber;
  int result;

  string type;

  string sumPhrase = "The sum between them is ";
  string subtractionPhrase = "The subtraction between them is ";
  string multiplicationPhrase = "The multiplication between them is ";
  string divisionPhrase = "The division between them is ";

  cout << "Please enter a number: ";
  cin >> firstNumber;
  cout << "Please enter another number: ";
  cin >> secondNumber;

  cout << "Do you prefer [multiplication, division, sum or subtraction]? ";
  cin >> type;

  if(type == "multiplication")
  {
    result = firstNumber * secondNumber;
    cout << multiplicationPhrase << result << endl;
  };
  if(type == "division")
  {
    result = firstNumber / secondNumber;
    cout << divisionPhrase << result << endl;
  };
  if(type == "subtraction")
  {
    result = firstNumber - secondNumber;
    cout << subtractionPhrase << result << endl;
  };
  if(type == "sum")
  {
    result = firstNumber + secondNumber;
    cout << sumPhrase << result << endl;
  };

  system("pause");
  return 0;
}
