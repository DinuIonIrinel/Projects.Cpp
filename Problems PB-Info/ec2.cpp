#include <bits/stdc++.h>
using namespace std;
int main() {
  float a, b, c;
  cin >> a >> b >> c;
  float d =  ( b * b ) - ( 4 * a * c );
  if ( d < 0 ) {
    cout << "Nu are solutii reale";
  } else if (d == 0 ) {
    cout << "Radacina dubla " << fixed << setprecision(2) << (- b / 2 * a );
  } else {
    cout << fixed << setprecision(2) << ( - b + sqrt(d) ) / ( 2 * a ) << " " << fixed << setprecision(2) << ( - b  -  sqrt(d) ) / ( 2 * a );
  }
  return 0;
}
