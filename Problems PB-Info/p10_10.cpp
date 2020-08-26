#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, k, numar_cifre = 0;
  cin >> n >> k;
  cout << '1';
  while (n != 0 ) {
    if ( n % 10 == 0)
      numar_cifre ++ ;
    n = n / 10;
  }
  for ( int i = 0; i < numar_cifre * k; ++i ) {
    cout << '0';
  }
  return 0;
}
