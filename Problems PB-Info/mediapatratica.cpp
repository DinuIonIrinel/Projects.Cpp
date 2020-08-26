#include <bits/stdc++.h>
using namespace std;
int main() {
  double n, x, numarator = 0;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> x;
    numarator +=  x * x ;
  }
   double  ma =  ( sqrt( numarator / n ) ) ;
  cout <<fixed << setprecision(2) << ma;
  return 0;
}
