#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("elempp.in");
ofstream fout("elempp.out");
bool pp(int n ) {
  if( sqrt(n) == int (sqrt(n)))
    return true;
  else
    return false;
}
int last2d(int n) {
  int inv = 0;
  while(n != 0 ) {
    inv = inv * 10 + n % 10;
    n = n / 10;
  }
  int nr = 0;
    nr =  (inv % 10 ) * 10 + ( inv / 10 ) % 10;
  return nr;
}
int main() {
  int n, a[100];
  fin >> n;
  for ( int i = 1; i <= n; ++i )  {
    fin >> a[i];
    if ( pp(last2d(a[i])) == true )
      fout << a[i] << " ";
  }
  return 0;
}
