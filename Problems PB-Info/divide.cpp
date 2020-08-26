#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, contor = 0;
  cin >> n >> m;
  while ( n % 10 != 0 ) {
    int cifra = n % 10;
    if ( m % cifra == 0  )
      contor ++;
    n = n / 10;
  }
  cout << contor;
  return 0;
}
