#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, max = 0;
  cin >> n;
  if ( n == 0 ) {
    cout << "Nu exista";
  } else {
  while ( n != 0 ) {
    cin >> n;
    if ( n > max ) {
      max = n;
    }
  }
  cout << max;
}
  return 0;
}
