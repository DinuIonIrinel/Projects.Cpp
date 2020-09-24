#include <iostream>
using namespace std;
int main() {
  int n, a[100], ok = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  for ( int i = 1; i <= n; ++i ) {
     ok = 0;
    for ( int j = 1 + i; j <= n; ++j ) {
      if ( a[j] > a[i]) {
        cout << a[j] << " ";
        ok++;
        break;
      }
   }
        if ( ok == 0)
        cout << -1 << " ";

}

  return 0;
}
