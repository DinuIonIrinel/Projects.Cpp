#include <iostream>
using namespace std;
bool cifre_distincte(int n) {
  bool ok = true;
  int c = n % 10;
  n = n / 10;
  while ( n != 0 ) {
    if ( c == n % 10) {
      ok = false;
      break;
    }
      n = n / 10;
  }
  return ok;
}

int main() {
  int n,a[1000];
  bool ok = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i)
    cin >> a[i];
  for ( int i = 1; i <= n; ++i )
    if ( cifre_distincte(a[i]) == false ) {
      ok = false;
      break;
    }
    if ( ok == true ) {
      cout << "DA";
    } else {
      cout << "NU";
    }
  return 0;
}
