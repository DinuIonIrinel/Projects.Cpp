#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, max = 0, min = 100000, a[100];
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> a[i];
    if ( a[i] > max )
      max = a[i];
    else if ( a[i] < min )
      min = a[i];
  }
  cout << max + min;
  return 0;
}
