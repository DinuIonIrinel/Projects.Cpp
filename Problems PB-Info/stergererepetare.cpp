#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, array[1005];
  cin >> n;
  for (int i = 1; i <= n; ++i )
    cin >> array[i];
  for (int i = 1; i <= n; ++i ) {
    for ( int  j = n; j >= i + 1; --j) {
      if ( array[i] == array[j] ) {
        for ( int  p = j; p < n; p++ )
          array[p] = array[p + 1];
          n--;
      }
    }
  }
  for (int i = 1; i <= n; ++i )
    cout << array[i] << " ";
  return 0;
}
