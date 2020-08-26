#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b, d, m , n;
  cin >> a >> b >> d;
  if ( a % d == 0 ) {
    m = a / d;
  } else {
    m = a / d + 1;
  }
  if ( b % d == 0 ) {
    n = b / d;
  } else {
    n = b / d + 1;
  }
  cout << m * n;
  return 0;
}
