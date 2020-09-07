#include <bits/stdc++.h>
using namespace std;
int binary_search(int v[], int n, int x) {
  int left = 0;
  int right = n ;
  while ( left <= right  ) {
  int mid = ( right + left ) / 2;
  if ( v[mid] == x ) return 1;
  else if ( x < v[mid]) right = mid - 1;
  else left = mid + 1;
  }
  return 0;
}

int main() {
  int n, m, b[200000],a[25000];
  cin >> n;
  for ( int i = 0 ; i < n; ++i )
    cin >> a[i];
  cin >> m;
  for  (int j = 0; j < m; ++j )
    cin >> b[j];
  for ( int j = 0 ; j < m; ++j ) {
    if ( binary_search(a, n ,b[j]) == 1 ) {
      cout << 1 << " ";
    } else {
      cout << 0 << " ";
    }
  }
  return 0;
}
