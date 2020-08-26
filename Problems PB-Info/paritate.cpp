#include <iostream>
using namespace std;
int main() {
  int a , b, parea = 0, impareaa = 0 , pareb = 0, impareab = 0;
  cin >> a >> b;
  int acopie = a;
  int bcopie = b;
  while ( a != 0 ) {
    if ( ( a % 10 ) % 2 == 0 ) {
      parea++;
    }
    else {
      impareaa++;
    }
    a = a / 10;
  }
  while ( b != 0 ) {
    if ( ( b % 10 ) % 2 == 0 )
      pareb++;
    else
      impareab++;
    b = b / 10;
  }
  if ( ( acopie % 2 == 0 && bcopie % 2 == 0 ) || ( acopie % 2 == 1 && bcopie % 2 == 1 ) ) {
    cout << parea + pareb;
  } else {
    cout << impareaa + impareab;
  }
  return 0;
}
