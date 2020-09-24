#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");
int main() {
  int n,a[100], k = 0;
  fin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> a[i];
  for ( int i = 1; i <= n; ++i )
    if ( a[i] == a[n] )
      k++;
  fout << k;
  return 0;
}
