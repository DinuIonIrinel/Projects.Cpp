#include <iostream>
using namespace std;
int main() {
  int n, a[200];
  bool impar = false;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> a[i];
    if ( a[i] % 2 == 1 )
    impar = true;
  }
  if ( impar == true ) {
    cout << "NU";
  } else {
    cout << "DA";
  }
  return 0;
}
