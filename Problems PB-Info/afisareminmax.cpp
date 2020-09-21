#include <iostream>
using namespace std;
int main() {
  int n,a[1000], max = 0, min = 100000, x = 0, y = 0;
  cin >> n;
  for(int i = 0; i < n; ++i ) {
    cin >> a[i];
    if (a[i] > max ) {
      x = i;
      max = a[i];
    }
    if (a[i] < min ) {
      min = a[i];
      y = i;
    }
  }
  if ( x > y) {
     int c = x;
     x = y;
     y = c;

  }
  for (int i = x; i <= y; ++i) {
      cout << a[i] << " " ;
  }
  return 0;
}
