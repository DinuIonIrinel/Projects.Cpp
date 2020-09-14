#include <bits/stdc++.h>
using namespace std;
int contor = 0;
int nr_cif_zero(int n, int& k) {
  if (n ==0  && contor == 0 )
    k = 1;
  else if ( n == 0 )
    k = 0;
  else {
    ++contor;
    if ( n % 10 == 0 )
      nr_cif_zero(n / 10, k), k++;
    else
      nr_cif_zero(n / 10 , k);
  }
}
int main() {
  int n,k;
  cin >> n;
  nr_cif_zero(n,k);
  cout << k;
  return 0;
}
