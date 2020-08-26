#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  long long p = 1;
  cin >> a >> b;
  for ( int i = 0; i < b; i++) {
    p = p * a;
  }
  cout << p;
  return 0;
}
