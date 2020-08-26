#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  double numitor = 0;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    int x;
    cin >> x;
    numitor +=  (double) 1 / x  ;
  }
  int ma  = ( n / numitor ) * 100;
  cout << ma / 100 << "." << ( ma / 10 ) % 10 << ma % 10;
  return 0;
}
