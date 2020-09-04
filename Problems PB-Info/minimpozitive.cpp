#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 1, min = 1000000;
  bool gasit = false;
    while ( n != 0 ) {
      cin >> n;
      if ( n > 0 && n < min ) {
        min = n;
        gasit = true;
      }
    }
  if ( gasit == false ) {
    cout << "NU EXISTA";
  } else {
    cout << min;
  }
  return 0;
}
