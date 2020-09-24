#include <iostream>
using namespace std;
int main() {
  int n, m, a[1000], b[1000], k = 0, ok = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  cin >> m;
  for ( int i = 1; i <= m; ++i)
    cin >> b[i];
  for ( int i = 1; i <= n; ++i ) {
    for ( int j = 1; j <= m; ++j )
      if ( a[i] > b[j] )
        k++;
      if ( k == m )
      ok++;
      k = 0;

}

  cout << ok;
  return 0;
}
