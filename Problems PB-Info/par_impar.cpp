#include <iostream>
using namespace std;
int main() {
  long long n;
  int mica_para = 9, mare_impara = 0, cifra;
  cin >> n;
  while ( n != 0 ) {
    cifra = n % 10;
    if ( cifra  % 2 == 0 && cifra < mica_para ) {
      mica_para = cifra;
    } else if (cifra  % 2 == 1 && cifra > mare_impara ) {
      mare_impara = cifra;
    }
    n = n / 10;
  }
  cout << mica_para + mare_impara;
  return 0;
}
