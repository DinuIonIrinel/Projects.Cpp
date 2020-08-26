#include <iostream>
using namespace std;
int main() {
  int n, u =0, z = 0;
  cin >> n;
  while ( n != 0 ) {
    if( n % 2 == 1 ) {
      u++;
    } if ( n % 2 == 0 ) {
      z++;
    }
    n = n / 2;
  }
  cout << z << " " << u;
  return 0;
}
