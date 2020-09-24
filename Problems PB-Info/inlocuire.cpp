#include <iostream>
using namespace std;
int main() {
  int n, a[200], med = 0, k = 0, sum = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i ) {
    cin >> a[i];
    if ( a[i] != 0 ) {
      sum += a[i];
      k++;
    }
  }
  med = int (sum / k);
  for ( int i = 1; i <= n; ++i ) {
    if ( a[i] == 0 ) {
      a[i] = med;
    }
  }
  for ( int i = 1; i <= n; ++i) {
    cout << a[i] << " ";
  }
}
