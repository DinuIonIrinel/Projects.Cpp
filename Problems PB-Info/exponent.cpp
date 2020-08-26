#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, k = 0;
  cin >> n >> m;
  while ( m != 0 ) {
    if ( m % n == 0  ){
      k++;
    }
    m = m / n;
  }
  cout << k;
  return 0;
}
