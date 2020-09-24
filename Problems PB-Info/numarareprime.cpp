#include <iostream>
#include <math.h>
using namespace std;
int prime_intre_ele(int a, int b) {
  int r = 0;
  while ( b != 0 ) {
    r = a % b;
    a = b;
    b = r;
  }
  int d = a;
  if ( d == 1)
    return 1;
  return 0;
}
int main() {
  int n, a[200], k = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  for ( int i = 1; i <= n; ++i ) {
    if (prime_intre_ele(a[i],a[n]) == 1 )
     ++k;
  }
  cout << k;
  return 0;
}
