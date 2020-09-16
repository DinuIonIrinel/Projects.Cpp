#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");
int main(){
  int n, a[201], max = 0, ap = 0;
  bool par = false;
  fin >> n;
  for ( int i = 1; i <= n; ++i )
    fin >> a[i];
  for ( int i = 1; i <= n; ++i ) {
    if ( a[i] % 2 == 0 && a[i] > max ) {
      par = true;
      max = a[i];
      ap = 1;
    } else if ( a[i] == max )
      ++ap;
  }
  if ( par == true )
    fout << max << " " << ap;
  else
    fout << -1;
  fin.close();
  fout.close();
  return 0;
}
