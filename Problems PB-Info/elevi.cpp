#include <iostream>
using  namespace std;
int main() {
  int m, n, a[1000], max = 0 , cnt = 0;
  cin >> m >> n;
  for ( int i = 1; i <= m ; ++i ) {
    for ( int j = 1; j <= n; ++j)
      cin >> a[j];
  }
  for ( int i = 1; i <= m; ++i ) {
    for ( int j = 1; j <= n; ++j ) {
      if ( a[j] > max )
        max = a[j];
    }
  }
  for ( int i = 1; i <= m; ++i )
    for ( int j = 1; j <= n; ++j )
      if ( a[j] == max ) {
        cnt++;
        break;
      }
    cout << max << " " << cnt;
  return 0;
}
