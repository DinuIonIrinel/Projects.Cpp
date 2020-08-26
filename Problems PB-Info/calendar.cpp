#include <bits/stdc++.h>
using namespace std;
int main() {
  int z, l, a;
  int ok = 1;
  cin >> z >> l >> a;
  if ( a > 2015 || a < 1850 )
    ok = 0;
  else if ( l > 12 || l < 0 )
    ok = 0;
  else if ( z > 31 || z < 0 )
    ok = 0;
  else if ( l == 2 && ( a % 4 == 0) && z > 29)
    ok = 0;
  else if ( l == 0 || z == 0 || a == 0 )
    ok = 0;
  if ( ok == 1) {
    cout << "DA";
  } else {
    cout << "NU";
  }
  return 0;
}
