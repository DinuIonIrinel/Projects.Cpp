#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int n, a[200], k = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  for ( int i = 1; i < n; ++i ) {
    for ( int j = 1 + i; j <= n; ++j ) {
      for ( int z = 1 + j; z <= n; z++) {
        if ( a[i] > 0 && a[j] > 0 && a[z] > 0 && abs( a[i] - a[j]) < a[z] && abs(a[i] - a[z]) < a[j]&& abs(a[j] - a[z])< a[i])
        {
          ++k;
        }
      }
    }
  }
  cout << k;
  return 0;
}
