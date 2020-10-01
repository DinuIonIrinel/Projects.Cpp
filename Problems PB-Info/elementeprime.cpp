#include <iostream>
#include <math.h>
using namespace std;
bool prim(int n) {
  if ( n < 1 )
    return false;
  else
    for ( int i = 2; i <= sqrt(n); ++i)
      if ( n % i == 0)
        return false;
  return true;
}
int main() {
  int n,a[200];
  bool prim_gasit = false;
  cin >> n;
  for ( int i = 0; i < n; ++i) {
    cin >> a[i];
    if ( prim(a[i]) == true ) {
      cout << "DA";
      prim_gasit = true;
      break;
    }
  }
  if ( prim_gasit == false) {
    cout << "NU";
  }
  return 0;
}
