#include <iostream>
using namespace std;
int nr_cifre(int n) {
  int k = 0;
  while ( n != 0 ) {
    k++;
    n /= 10;
  }
  return k;
}
int main() {
  int n,a[500];
  bool pres = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i ) 
    cin >> a[i];
  for ( int i = 1; i <= n; ++i)
    if ( nr_cifre(a[i]) % 2 == 1) {
      pres = false;
      break;
    }
  if ( pres == false ) {
    cout << "NU";
  } else {
    cout << "DA";
  }
  return 0;
}
