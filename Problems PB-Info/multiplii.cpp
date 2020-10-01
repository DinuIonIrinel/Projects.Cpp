#include <iostream>
using namespace std;
int main() {
  int n, a[1000];
  bool ok = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  for ( int i = 1; i < n; ++i) {
    if ( a[i] % a[n] != 0) {
      ok = false;
      break;
    }
  }
  if ( ok == false ) {
    cout << "NU";
  } else {
    cout << "DA";
  }
   return 0;
}
