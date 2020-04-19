#include <iostream>
using namespace std;
bool prim(int number){
  for ( int divizor = 2; divizor <= number / 2; divizor++)
    if (number % divizor == 0)
      return false;
  return true;
}
int main()
{ int number = 14;
  for ( int divisor = 2; divisor < number; divisor ++)
    {
        if ( number % divisor == 0 && prim(divisor) == true)
        cout << divisor << " ";
    }
  return 0;
}
