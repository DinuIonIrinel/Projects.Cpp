#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  long long x;
  cin >> n;
  cin >> x;
  if ( sqrt (x) == int ( sqrt(x)) ) {
    cout << "DA" << "\n";
  } else {
    cout << "NU" << "\n";
  }
  for ( int  i = 0; i < n - 1; ++i ) {
    cin >> x;
    if ( sqrt (x) == int ( sqrt(x)) ) {
      cout << "DA" << "\n";
    } else {
      cout << "NU" << "\n";
    }
  }
  return 0;
}
