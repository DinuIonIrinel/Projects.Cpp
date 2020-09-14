#include <bits/stdc++.h>
using namespace std;
int contor = 0;
int nr_cif_zero(int n) {
  if( n == 0 && contor == 0)
    return 1;
  else if ( n == 0 )
    return 0;
  else {
    contor++;
    if ( n % 10 == 0 )
      return nr_cif_zero(n / 10) + 1;
    else
      return nr_cif_zero(n / 10);
  }
}
/*
while ( n != 0 ) {
if ( n % 10 == 0 )
  cnt++;
n = n / 10;
}*/
int main() {
  int n;
  cin >> n;
  cout << nr_cif_zero(n);
  return 0;
}
