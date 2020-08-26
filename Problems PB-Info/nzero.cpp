#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a;
  long long p = 1;
  cin >> n >> a;
  for ( int i = 0; i < a; ++i ) {
    p = p * 10;
  }
  cout << n * p;
  return 0;
}
