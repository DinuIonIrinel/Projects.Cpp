#include <bits/stdc++.h>
using namespace std;
int cifmin(int n) {
  if ( n < 10 ) {
    if ( n % 2 == 0 )
      return n;
    if ( n % 2 == 1)
      return -1;
  }
  else
  {  if (  ( n % 10 ) %  2 == 0  )
        return min(n %10, cifmin(n / 10));
  }
}
int main() {
  int n;
  cin >> n;
  cout << cifmin(n);
  return 0;
}
