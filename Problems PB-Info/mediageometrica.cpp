#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x;
  long long p = 1;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> x;
    p = p * x;
  }
  float putere = ( float)  1 / n ;
  cout << pow( p, putere );
  return 0;
}
