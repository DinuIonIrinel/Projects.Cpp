#include <bits/stdc++.h>
using namespace std;
long long nr_cifre ( int n ) {
  long  contor = 0;
  while ( n != 0 ) {
    contor ++;
    n = n / 10;
  }
  return contor;
}
long long suma_cifre(int n ) {
  long long sum = 0;
  while ( n !=0 ) {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}
int main() {
  int n, s;
  int k = 0;
  cin >> n >> s;
  int i;
  i = 1;
if (n > 1 )
  i = pow(10,n);
  while ( nr_cifre(i) <= n ) {
    if( suma_cifre(i) == s ) {
      cout << i << " ";
      k++;
    }
    i++;
  }
  if ( k > 0 ) {
    cout << "\n";
    cout << k;
  } else {
    cout << "0";
  }

  return 0;
}
