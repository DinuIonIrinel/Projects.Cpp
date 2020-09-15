#include <bits/stdc++.h>
using namespace std;
int main() {
  long long c, p, k = 0;
  cin >> c >> p;
  k =(c- (p-1) *p/2 ) / p;
  cout << c-(k*p+(p-1)*p/2);
  return 0;
}
