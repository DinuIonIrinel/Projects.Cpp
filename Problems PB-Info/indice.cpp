#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a[1000];
  int max = 0;
  int min = 1000000;
  cin >> n;
  for ( int i = 1; i <= n; ++i ) {
    cin >> a[i];
    if ( a[i] > max )
      max = a[i];
    if ( a[i] < min )
      min = a[i];
  }
  for ( int i = 1; i <= n; ++ i) {
    if ( a[i] == min )
      cout << i << " ";
  }
  for ( int i = 1; i <= n; ++ i) {
    if ( a[i] == max )
      cout << i;
  }
  return 0;
}
