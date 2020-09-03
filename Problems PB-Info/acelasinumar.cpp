#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, sum = 0;
  cin >> n >> k;
  for ( int  i = 0; i < k; ++i ) {
    int x;
    cin >> x;
    sum += x;
  }
  if ( n == ( sum + n ) ) {
    cout << "DA";
  } else {
    cout << "NU";
  }
  return 0;
}
