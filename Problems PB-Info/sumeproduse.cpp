#include <iostream>
using namespace std;
int main() {
  long long n, sum1 = 0, sum2 = 0, a[100000];
  cin >> n;
  for ( int i = 1; i <= n; ++i)
    cin >> a[i];
  for ( int i = 1; i <= n; ++i ) {
    if ( i <= n / 2 )
      sum1 += a[i];
   else
    sum2 += a[i];
  }
  cout << sum1 * sum2;
  return 0;
}
