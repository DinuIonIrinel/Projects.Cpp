#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void cifmaxmin(int n, int& max, int& min) {
  if ( n == 0 && cnt == 0 ) {
      max = 0;min = 0;
  }
  else if( n == 0 ) {
      max = 0;min = 9;
  }
  else {
    ++cnt;
    int c = n % 10;
    cifmaxmin(n / 10, max, min);
    if ( c > max )
      max = c;
    if ( c < min )
      min = c;
   }
}
int main() {
  int n, min, max;
  cin >> n;
  cifmaxmin(n, max, min);
  cout << max  << " " << min;
  return 0;
}
