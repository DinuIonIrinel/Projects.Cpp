#include <bits/stdc++.h>
using namespace std;
fstream fin("clase.in");
ofstream fout("clase.out");
int binary_search(long long v[], int n, long long x) {
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
  long long c[10000], x;
  int n, m, contor = 0;
  fin >> n;
  for ( int i = 0 ; i < n; ++i )
    fin >> c[i];
  fin >> m;
  for ( int i = 0; i < m; ++i ) {
    fin >> x;
    if ( binary_search(c,n,x) == 1 ) {
      contor++;
  }
}
  fout << contor;
  fin.close();
  fout.close();
  return 0;
}
