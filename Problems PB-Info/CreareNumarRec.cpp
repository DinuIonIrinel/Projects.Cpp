#include <bits/stdc++.h>
using namespace std;
int f(int n, int a[], int& k) {
  k = -1;
  for ( int i = 0; i < n; ++i )
    if ( a[i] % 2 == 0 ) {
      if ( k == -1)
        k = 0;
        k = k * 10 + a[i];
    }
}
/*
for ( int i = 0; i < n; ++i)
  if ( a[i] % 2 == 0 )
    b[++k] = a[i];*/
int main() {
  int n, a[100], k;
  cin >> n;
  for ( int i = 0; i < n; ++i)
    cin >> a[i];
  f(n, a, k);
  cout << k;
  return 0;
}
