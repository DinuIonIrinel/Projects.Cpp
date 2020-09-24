#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sume.in");
ofstream fout("sume.out");
int main() {
  int n, a[100], sum = 0;
  fin >> n;
  for ( int i = 1; i <= n; ++i )
    fin >> a[i];
  while ( n != 0 ) {
    for (int i = 1; i <= n; ++i )
      sum += a[i];
      fout  << sum << "\n";
      sum = 0;
      n--;
}
  return 0;
}
