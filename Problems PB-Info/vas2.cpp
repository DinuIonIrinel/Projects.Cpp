#include <bits/stdc++.h>
using namespace std;
int main() {
  long long int minute = 0;
  double x, t, y;
  int i;
  cin >> x >> t >> y >> i;
  int v = x / i;
  while ( x >  y ) {
    x = x - x / i;
    minute += t;
  }
  cout << minute;
  return 0;
}
