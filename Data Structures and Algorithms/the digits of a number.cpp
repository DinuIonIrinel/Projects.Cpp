#include <iostream>
using namespace std;
void digits(int number){
  while (number != 0)
  {
      cout << number % 10;
      number = number / 10;
  }
}
int main()
{ int number = 4567;
  digits(number);
}
