#include <iostream>
using namespace std;
int main() {
  int n, a[100];
  cin >> n;
  for ( int i = 1; i <= n; ++i)
    cin >> a[i];
  cout << n << a[1] / 10;
  return 0;
}
