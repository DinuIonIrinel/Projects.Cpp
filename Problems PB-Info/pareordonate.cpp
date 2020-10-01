#include <iostream>
using namespace std;
int main() {
  int n,a[500];
  bool ordonate = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i)
    cin >> a[i];
  for ( int i = 1; i < n; ++i) {
    for ( int j = i + 1; j <= n; ++j ) {
      if ( a[i] % 2 ==0 && a[j] % 2 == 0 && a[i] > a[j]) {
        ordonate = false;
        break;
      }
    }
  }
  if ( ordonate == false ) {
    cout << "NU";
  } else {
    cout << "DA";
  }
  return 0;
}
