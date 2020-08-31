#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
unsigned long long a, r;
  int punctaj = 0;
  cin >> n;
  for (int i = 0; i < n; ++i ) {
    cin >> a >> r;
    if ( r * r ==   a * ( a + 1 ) * (a + 2 ) * ( a + 3 ) + 1    ) {
      punctaj ++;
    }
  }
    cout << punctaj;
  return 0;
}
