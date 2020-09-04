#include <bits/stdc++.h>
using namespace std;
int f[1000];
int main() {
  int a[100], n;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> a[i];
    f[a[i]] = 1;
  }
  for ( int i = 0; i < 9; ++i ) {
    if ( f[i] == 1) {
      cout << "Elementul " << i << " apare in vector" << "\n";
    } else {
      cout << "Elementul " << i << " nu apare in vector" << "\n";
    }
  }
  return 0;
}
