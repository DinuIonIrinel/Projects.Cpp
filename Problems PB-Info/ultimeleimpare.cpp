#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a[1005];
  cin >> n;
  int  k = 0, ultimul,penultim;
  for ( int i = 0; i < n; ++i ) {
    cin >> a[i];
    if ( a[i] % 2 == 1 ) {
      penultim = ultimul;
      ultimul = a[i];
      k++;
    }
  }
  if ( k < 2 ) {
    cout << "Numere insuficente";
  } else  {
      cout << penultim << " " << ultimul;
  }

  return 0;
}
