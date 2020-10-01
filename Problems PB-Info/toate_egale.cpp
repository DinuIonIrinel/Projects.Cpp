#include <iostream>
using namespace std;
int main() {
  int n,a[600],x;
  bool egale = true;
  cin >> n;
  cin >> x;
  for ( int i = 1; i <= n - 1; ++i ) {
    cin >> a[i];
    if ( x != a[i])
      egale = false;
  }
  if ( egale == false ) {
    cout << "NU";
  } else {
    cout << "DA";
  }
  return 0;
}
