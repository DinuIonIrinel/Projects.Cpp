#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n,a[1000];
  bool ok = true;
  cin >> n;
  for ( int i = 1; i <= n; ++i)
    cin >> a[i];
  int x = a[1];
  int y = a[n];
  if ( x > y) {
    int aux = x;
    x = y;
    y = aux;
  }
  for ( int i = 1; i <= n; ++i ) {
    if (  a[i] < x || a[i] > y )  {
      ok = false;
      break;
    }
  }
  if ( ok == true) {
    cout << "DA";
  } else {
    cout << "NU";
  }
  return 0;
}
