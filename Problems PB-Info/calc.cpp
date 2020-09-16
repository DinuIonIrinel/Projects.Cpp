#include <iostream>
using namespace std;
int main() {
  int n, a[100], max = 0 , min = 1000000000;
  bool gasit = false;
  cin >> n;
  for( int i = 1 ; i <= n; ++i ) {
    cin >> a[i];
    if ( i % 2 == 0 && a[i] > max )
      max = a[i];
    if ( i % 2 == 1 && a[i] < min && a[i] > 10 && a[i] <= 99) {
      gasit = true;
      min = a[i];
    }
  }
  if ( gasit == true )
    cout << max << " " << min;
  else
    cout << max << " " << -1;
return 0;
}
