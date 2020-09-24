#include <iostream>
#include <fstream>
using namespace std;
// 1 2 3 4 5 6 7 8 9
ifstream fin("zone.in");
ofstream fout("zone.out");
int main() {
  int n, a[100];
  fin >> n;
  for ( int i = 1; i <= 3 * n; ++i )
    fin >> a[i];
    for ( int i = 1; i <= n; ++i ) {
      for  ( int j = 3 * n; j > 2 * n; --j ) {
          if (a[i] % 2 == 0 && a[j] % 2 == 1 ) {
            int aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            break;
          }
      }
    }
    for ( int i = 1; i <= 3 * n; ++i )
      fout << a[i] << " ";
  return 0;
}
