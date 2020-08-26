#include <iostream>
using namespace std;
int main() {
  long long n, numar = 0;
  cin >> n;
  int ultimacifra = n % 10;
  while ( n != 0 ) {
    if ( n % 10 == ultimacifra ) {
      numar ++;
    }
      n = n / 10;
  }
  cout << numar;
  return 0;
}
