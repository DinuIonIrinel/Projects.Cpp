#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");
bool prim ( int n ) {
  if ( n == 1 )
    return false;
  for (int d = 2 ; d <= sqrt(n); ++ d)
    if ( n % d == 0 )
      return false;
  return true;
}
int main() {
  long long n, a[1001], k = 0;
  fin >> n;
  for ( int i = 1; i <= n; ++i ) {
    fin >> a[i];
    if (prim(a[i]) == true )
      k++;
  }
  fout << k;
  return 0;
}
