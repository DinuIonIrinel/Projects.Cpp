#include <bits/stdc++.h>
using namespace std;
int main() {
  // 1 6 1 6 5 6 1 6 1
  long long n,p = 0, x = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    x = i  % 100;
    p = p + x * x * x * x;
  cout << p % 10;
  return 0;
}
