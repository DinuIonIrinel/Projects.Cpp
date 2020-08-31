#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a[1005];
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  for ( int i = n; i >= 1; --i)
    if ( sqrt(a[i]) == int ( sqrt(a[i] ) ) ) {
      for ( int j = n; j >= i; j-- )
        a[j + 1] = a[j];
        n++;
        a[i] = sqrt(a[i]);
    }

  for ( int  i = 1; i <= n; ++i ) {
    cout << a[i] << " ";
  }
  return 0;
}
