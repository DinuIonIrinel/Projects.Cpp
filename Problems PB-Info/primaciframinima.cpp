#include <bits/stdc++.h>
using namespace std;
int  prima_cifra(long long numar ) {
  int cifra;
  while ( numar != 0 ) {
    cifra = numar % 10;
    numar = numar / 10;
  }
  return cifra;
}
int main() {
int n, min = 9, x[10000], x2;
cin >> n;
for (int  i = 0 ; i < n; ++i ) {
  cin >> x[i];
  x2 = x[i];
  if ( prima_cifra(x2) < min ) {
    min = prima_cifra(x2);
  }
}
for ( int  i = n; i >= 0; i--) {
  if ( prima_cifra(x[i]) == min ) {
    cout << x[i];
    break;
  }
}

  return 0;
}
