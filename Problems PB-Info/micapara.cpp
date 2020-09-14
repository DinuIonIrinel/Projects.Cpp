#include <bits/stdc++.h>
using namespace std;
int cifminpar(int n) {
   if ( n < 10 ) {
    if ( n % 2 == 0 )
      return n;
    else
      return -1;
  }
  else {
    int c = n % 10;
    if ( c % 2 == 0 )
      return min( c, cifminpar(n / 10));
    else
      return cifminpar(n / 10);
  }
}
int main() {
  int n;
  cin >> n;
  cout << cifminpar(n);
  return 0;
}
