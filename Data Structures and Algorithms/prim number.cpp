#include <iostream>
using namespace std;
bool prim(int number){
  for ( int divizor = 2; divizor <= number / 2; divizor++)
    if (number % divizor == 0)
      return false;
  return true;
}
int main(){
  int number = 12;
  if ( prim (number) == true )
    cout << "The number is prim ";
  else
    cout << "The number is not prime";
  return 0;
}
