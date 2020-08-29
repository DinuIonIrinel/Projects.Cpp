#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  char c, d;
  cin >> n >> c >> d;
  for ( int i = 0; i < n; ++ i) {
    for ( int j = 0; j < n; ++j ) {
      if ( i == 0 || j == 0 || i == n - 1 || j == n - 1 ) {
        cout << c;
      } else {
        cout << d;
      }
    }
    cout << endl;
  }
  return 0;
}
