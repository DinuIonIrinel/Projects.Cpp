#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, array[1005];
  cin >> n;
  for (int i = 1; i <= n; ++i ) {
    cin >> array[i];
  }
  for ( int p = n; p >= 1; p-- )
    if ( array[p] % 2 == 0 ) {
      for ( int j = p ; j < n; ++j )
         array[j] = array[j + 1];
      n--;
    }
  for ( int i = 1; i <= n; ++i ) {
    cout << array[i] << " ";
  }
  return 0;
}
