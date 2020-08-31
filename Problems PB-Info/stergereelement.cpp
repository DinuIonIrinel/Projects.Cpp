#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, p, array[1500];
  cin >> n >> p;
  for ( int i = 1; i <= n; ++i ) {
    cin >> array[i];
  }
  for ( int  i = p; i <= n; ++i ) {
    array[i] = array[i + 1];
  }
  n--;
  for ( int i = 1; i <= n; ++i ) {
    cout << array[i] << ' ';
  }
  return 0;
}
