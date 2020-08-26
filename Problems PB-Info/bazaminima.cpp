#include <iostream>
using namespace std;
int main() {
  int n, b = 0;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    while ( x != 0 ) {
      int cif = x  % 10;
      if ( cif > b ) {
        b = cif;
      }
      x = x / 10;
    }
  }
  cout << b + 1;
  return 0;
}
