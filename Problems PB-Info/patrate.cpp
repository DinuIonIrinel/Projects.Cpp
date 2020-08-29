#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int suma = 0;
  cin >> n;
    for ( int j = 1; j <= n; ++j ) {
      if ( sqrt(j) == int (sqrt(j)))
        suma += j;
    }
  cout << "Rezultatul este " << suma;
  return 0;
}
