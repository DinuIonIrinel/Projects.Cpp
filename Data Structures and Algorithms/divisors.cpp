#include <iostream>
using namespace std;
void divisors(int number){
  for (int divisor = 1; divisor <= number; divisor++)
      if ( number % divisor == 0)
        cout << divisor << " ";
}
int main(){
  int number = 12;
  divisors (number);
  return 0;
}
