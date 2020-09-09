#include <bits/stdc++.h>
using namespace std;
int main () {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = 10;
  for ( int i = 0; i < 10; ++i )
    a[i] = 1;
  for ( int i = 3; i * i <= 10; i = i + 2 ) {
    if (a[i] == 1) {
      for ( int j = i * i; j <= 10; j = j + 2 * i ) {
        a[j] = 0;
      }
    }
  }
  cout << 2 << " ";
  for ( int i = 3; i <= 10; i = i + 2) {
      if ( a[i] == 1 ) {
        cout << i << " ";
      }
  }
  return 0;
}
