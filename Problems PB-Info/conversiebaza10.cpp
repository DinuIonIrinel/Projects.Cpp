#include <iostream>
using namespace std;
int n, b, k = 0;
int main() {
  cin >> n ;
  cin >> b;
  int pb = 1;
  while ( n != 0 ) {
    k = k + ( n % 10 ) * pb;
    pb = pb * b;
    n = n / 10;

  }
    cout << k;
  return 0;
}
