#include <iostream>
#include <math.h>
using namespace std;
int main() {
  long long  n, sum = 0 ;
  cin >> n;
  for ( int i = 1; i * i <= n; ++i ) {
    if ( n % i == 0  && i % 2 == 1)
      sum += i;
  }
  cout << sum;
  return 0;
}
