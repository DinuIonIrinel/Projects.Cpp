#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("minmax.in");
ofstream fout("minmax.out");
int main() {
  int n, a[1000], max = 0, min = 1000000;
  fin >> n;
  for ( int i = 1; i <= n; ++i ) {
    fin >> a[i];
    if ( a[i] < min )
      min = a[i];
    if ( a[i] > max )
      max = a[i];
  }

  cout << min << " " << max;
  fin.close();
  fout.close();
  return 0;
}
