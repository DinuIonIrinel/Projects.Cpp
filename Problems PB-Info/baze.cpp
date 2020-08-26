#include <iostream>
using namespace std;
int main() {
  int n, b, c, pb = 1, rezultat1 = 0 , sir[100] , contor = 0;
  cin >> n >> b >> c;
    do {
    rezultat1 = rezultat1 + ( n % 10) * pb;
    pb = pb * b;
    n = n / 10;
  } while( n != 0);
  while ( rezultat1 != 0 ) {
    sir[contor] = rezultat1 % c;
    contor++;
    rezultat1 = rezultat1 / c;
  }
  for ( int j = contor - 1; j >=0; j-- ) {
    cout << sir[j];
  }
  return 0;
}
