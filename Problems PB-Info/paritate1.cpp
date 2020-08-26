#include <iostream>
using namespace std;
int main() {
  int n, sir[100], p = 0, i = 0;
  cin >> n;
  for ( int j = 0; j < n; j ++ ) {
    cin >> sir[j];
    if( sir[j] % 2 != 0 ) {
      i++;
  } else {
    p ++;
  }
}
  if ( i > p ) {
    cout << i - p;
  } else {
    cout << p - i;
  }
  return 0;
}
