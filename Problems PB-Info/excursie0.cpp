#include <bits/stdc++.h>
using namespace std;
int main() {
  int z, pb , b, pt , t;
  bool found = false;
  cin >> z >> pb >> b >> pt >> t;
  for ( int  i = 0; i < z; ++ i ) {
    pb = pb + b;
    pt = pt + t;
  if ( pb == pt ) {
    found = true;
    break;
  }
}
  if ( found == true ) {
    cout << pb;
  } else {
    cout << -1;
  }

  return 0;
}
