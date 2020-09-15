#include <bits/stdc++.h>
using namespace std;
int main() {
  int mod = 10234573;
  int a, b, c, n;
  cin >> n;
  a = n;
  b = n + 1;
  c = 2 * n;
  c = c + 1;
  if ( a % 2 == 0 )
    a /= 2;
  else
    b /= 2;
  if ( a % 3 == 0 )
    a /= 3;
  else if ( b % 3 == 0)
    b /= 3;
  else
    c /= 3;
  cout << a % mod * b % mod * c % mod;
  return 0;
}
