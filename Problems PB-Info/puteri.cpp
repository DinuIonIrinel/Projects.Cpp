#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m ;
  long long  p = 1;
  cin >> n >> m;
  while ( p  <= m ) {
    cout << p << ' ';
    p = p * n;
  }
  return 0;
}
