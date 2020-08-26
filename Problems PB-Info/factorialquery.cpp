#include <iostream>
using namespace std;
#define MOD 1000000007;
int factorial(int n) {
  if ( n == 0 )
    return 1;
  else
    return n * (factorial ( n - 1 ));
}
int main() {
  long long n, x, produs = 1;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> x;
    produs *= factorial(x);
  }
  cout << produs % MOD;
  return 0;
}
