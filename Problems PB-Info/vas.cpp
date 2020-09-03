#include <bits/stdc++.h>
using namespace std;
int main() {
  long long x, t, y, minute = 0;
  cin >> x >> t >> y;
  while ( x >  y ) {
    x = x - x /4;
    minute += t;
  }
  cout << minute;
  return 0;
}
