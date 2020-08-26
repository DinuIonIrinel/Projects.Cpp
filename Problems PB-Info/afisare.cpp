#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n, v[1005];
  vector<int> pare;
  vector<int> impare;
  cin >> n;
  for (int i = 1; i <= n; i++ )
    cin >> v[i];
  for ( int i = 1; i <= n; i++  ) {
    if ( i  % 2 == 0 )
      pare.push_back(v[i]);
  }
  for ( int i = n ; i >= 1; i-- ) {
    if ( i  % 2 == 1 )
      impare.push_back(v[i]);
  }
  for ( auto it:pare ) {
    cout << it << " ";
  }
    cout << '\n';
  for ( auto it:impare ) {
    cout << it << " ";
  }

  return 0;
}
