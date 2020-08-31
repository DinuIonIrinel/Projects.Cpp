#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a[1000];
  int max = 0;
  int min = 1000000;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> a[i];
    if ( a[i] > max )
      max = a[i];
    if ( a[i] < min )
      min = a[i];
  }
  cout << min << " " << max;
  return 0;
}
