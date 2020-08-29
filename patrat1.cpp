#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  char c, d;
  cin >> n >> c >> d;
  for ( int i = 0; i < n ; ++ i) {
    for ( int j = 0; j < n  ; ++j ) {
      if ( i % 2 == 0 && j % 2 == 0 ) {
        cout << c;
    } else if ( i % 2 == 0  && j % 2 == 1 ){
      cout << d;
    } else if ( i % 2 == 1  && j % 2 == 1 ){
      cout << c;
    } else if ( i % 2 == 1  && j % 2 == 0 ){
      cout << d;
    }
  }
    cout << '\n';
}
  return 0;
}
