#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  if ( n == 1 && m == 1 ) {
    cout << "__0_0___";
  } else if ( n == 1 )  {
    for ( int i = 1; i <= m; ++i ) {
      cout << "__0_0___";
    }
  }
  else {
  for ( int  i = 1; i <= m; i ++ ) {
    cout << "__0_0___";
  }
  cout << "\n";
  for (int i = 1; i <= n - 2 ; i ++ ) {
    for ( int  j = 1; j <= m * 2; j ++ )
      cout << "_0__";

    cout << "\n";
  }
  for (int i = 1; i <= m; i++ ) {
    cout << "0_____0_";
  }
}
  return 0;
}
