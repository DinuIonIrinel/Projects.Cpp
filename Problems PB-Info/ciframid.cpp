#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int min = 9, max = 0;
  int n2 = n;
  while ( n != 0 ) {
    if ( n % 10 > max)
      max = n % 10;
    if ( n % 10 < min )
      min = n % 10;
    n = n / 10;
  }
  while ( n2 != 0 ) {
    if ( n2 % 10 != min && n2 % 10 != max ) {
      cout << n2 % 10;
    }
    n2 /= 10;
  }
  return 0;
}
