#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, x, sum = 0, contor = 0;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> x;
    if ( x % 2 == 0 ) {
      sum += x;
      contor ++;
    }
  }
  cout << fixed << setprecision(2) << (float) sum / contor;
  return 0;
}
