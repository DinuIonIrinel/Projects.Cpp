#include <iostream>
using namespace std;
int main() {
  int n,a[101];
  bool ok = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i)
    cin >> a[i];
  for ( int i = 1; i < n; ++i) {
    if ((a[i- 1] ==1 && a[i] == 1) || (a[i + 1] ==1 && a[i] == 1))
      ok = false;
  }
  if ( ok == false ) {
    cout << "NU";
  } else {
    cout << "DA";
  }
  return 0;
}
