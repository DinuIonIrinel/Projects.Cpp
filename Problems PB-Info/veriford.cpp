#include <iostream>
using namespace std;
bool sortat(int a[],int n) {
  bool sort = true;
  for ( int i = 1; i < n; ++i ) {
    for ( int j = i + 1; j <= n; ++j) {
      if ( a[i] > a[j]) {
        sort = false;
        break;
      }
    }
  }
  return sort;
}
int main() {
  int n, m, a[10];
  cin >> n;
  for ( int i = 1; i <= n; ++i ) {
    cin >> m;
    for ( int j = 1; j <= m; ++j )
      cin >> a[j];
      if ( sortat(a,m) == true )
        cout << 1 << " ";
      else
        cout << 0 << " ";
  }
  return 0;
}
