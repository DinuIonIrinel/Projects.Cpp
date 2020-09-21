#include <iostream>
#include <fstream>
/*
x - x * p / 100 = y
p = ( x - y ) * 100 / x;

*/
using namespace std;
ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");
int main() {
  int n, a[10], b[10], pos = 0, max = 0, procent = 0;
  fin >> n;
  for ( int i = 1; i <= n; ++i )
    fin >> a[i];
  for ( int i = 1; i <= n; ++i )
    fin >> b[i];
  for ( int i = 1; i <= n; ++i)  {
      procent =  ((a[i] - b[i]) * 100 )/ a[i];
      if ( procent > max ) {
        max = procent;
        pos = i;
      }
  }
  fout << pos;
  fin.close();
  fout.close();
  return 0;
}
