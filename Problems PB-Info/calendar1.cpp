#include <bits/stdc++.h>
using namespace std;
int main() {
  int z, l, a;
  cin >> z >> l >> a;
  if ( z == 31  ) {
    if ( l == 12 ) {
      cout << 1 << " " <<  1 << " " << a + 1;
    } else {
      cout << z  << " " <<  l + 1 << " " << a;
    }
  }  else if ( l == 2 && a % 4 == 0 && z == 29 ) {
    cout << 1 << " " << l + 1 << " " << a;
  } else if ( l == 2 && a % 4 == 1 && z == 28 ) {
    cout << 1 << " " << l + 1 << " " << a;
  } else {
    cout << z + 1 << " " << l << " " << a;
  }
  return 0;
}
