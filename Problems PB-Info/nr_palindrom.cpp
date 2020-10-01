#include <iostream>
using namespace std;

int main() {
  int n,a[1000];
  bool ok = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i) {
    cin >> a[i];
    cout << a[i];
  }
  cout << "\n";
  for ( int i = 1,j = n; i < j; ++i ,--j)
      if ( a[i] != a[j])
        ok = false;
  if ( ok == true ) {
    cout << "DA";
  } else {
    cout << "NU";
  }

  return 0;
}
