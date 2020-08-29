#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  long long p;
  int x = 1;
  cin >> n >> p;
  while ( x <= p ) {
    cout << x << " ";
    x *= n;
  }
  return 0;
}
