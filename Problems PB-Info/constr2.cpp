#include <iostream>
using namespace std;
int main() {
  int n, a[200], sum = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i) {
      cin >> a[i];
      sum += a[i];
  }
  for ( int i = 1; i <= n; ++i )
    cout << sum - a[i] << " ";
  return 0;
}
