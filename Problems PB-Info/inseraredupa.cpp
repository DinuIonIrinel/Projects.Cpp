#include <bits/stdc++.h>
using namespace std;
int a[1005], n, x, j = -1;
int main() {
  int num;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> num;
    j++;
    a[j] = num;
    if ( num % 2 == 0 ) {
      j++;
      a[j] = num * 2;
    }
  }
  for ( int i = 0; i <= j; ++i )
    cout << a[i] << " ";
  return 0;
}
