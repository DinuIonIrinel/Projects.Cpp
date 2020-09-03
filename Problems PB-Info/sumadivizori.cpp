#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int n, sum = 0, d = 1;
  cin >> n;
  if ( n != 1 ) {
    for (  d = 1;  d * d < n; ++d ) {
     if ( n % d == 0 )
      sum = sum + d;
      sum = sum + n / d;
    if ( d * d == n)
    sum -= d;}
    cout << sum;
  } else {
    cout << 1;
  }
  return 0;
}
