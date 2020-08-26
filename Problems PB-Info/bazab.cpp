#include <iostream>
using namespace std;
int main() {
  int n, b, max = 0;
  cin >> n >> b;
  while ( n != 0 ) {
    int cif = n % b;
    if ( cif > max ) {
        max = cif;
    }
    n = n / b;

  }
  cout << max;
  return 0;
}
