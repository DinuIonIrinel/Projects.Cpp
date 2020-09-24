#include <iostream>
#include <vector>
using namespace std;
int munte(int n ) {
  int ok = 1;
  vector <int> v;
  while ( n != 0 ) {
    v.push_back(n % 10);
    n = n / 10;
  }
  for ( int i = 0 ; i < v.size(); ++i )
    for ( int j = i + 1; j < v.size(); ++j) {
      if ( v[i] > v[j])
        ok = 0;
    }
  return ok;
}
int main() {
  int n, a[1000];
  cin >> n;
  for ( int i = 1; i <= n; ++i) {
    cin >> a[i];
    if (munte(a[i]) == 1 )
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}
