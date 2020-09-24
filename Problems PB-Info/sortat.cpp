#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
ifstream fin("pozitiex.in");
ofstream fout("pozitiex.out");
int main() {
  int n, a[100],first = 0, pos = 0, x = 0;
  bool gasit = false;
  fin >> x;
  fin >> n;
  for ( int i = 1; i <= n; ++i ) {
    fin >> a[i];
  }
  sort(a , a + n + 1);
  for ( int i = 1; i <= n; ++i ) {
    if ( x == a[i] ) {
      pos = i;
      gasit = true;
    }
  }
  if ( gasit == false ) {
    fout << "NU EXISTA";
  } else {
    fout << pos;
  }
  return 0;
}
