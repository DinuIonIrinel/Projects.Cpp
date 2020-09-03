#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, array[1000];
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> array[i];
  }
  int sum = 0;
  for ( int i = 0; i < n; i ++) {
    sum += array[i];
  }
  cout << sum;
  return 0;
}
