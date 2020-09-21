#include <iostream>
using namespace std;
int sum(int n) {
  if ( n == 0 )
    return 0;
  else return n % 10 + sum(n / 10 );
}
int main() {
  int n, x[200], y[200], k = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i ) {
    cin >> x[i];
    int z = x[i];
    y[++k] = ( z % sum(z));
  }
  for ( int i = 1; i <= k; ++i ) {
    cout << y[i] << " ";
  }
  return 0;
}
