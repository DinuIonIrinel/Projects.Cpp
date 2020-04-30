#include <iostream>
using namespace std;
int main(){
  int number, nr_digits = 0;
  cin >> number;
  while ( number != 0 )
  {
    if ( number % 2 == 1)
    {
      nr_digits++;
    }
      number = number / 10;
  }
    cout << nr_digits;
  return 0;
}
