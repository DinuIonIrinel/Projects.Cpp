#include <bits/stdc++.h>
using namespace std;
ifstream fin("maxcif.in");
ofstream fout("maxcif.out");
int frecventa[100];
int main() {
  int x = 0;
  while ( fin >> x ) {
    frecventa[x]++;
  }
  int max = 0;
  for ( int i = 0; i <= 9; ++i ) {
    if ( frecventa[i] > max )
      max = frecventa[i];
  }
  for ( int i = 0; i <= 9; ++i )
    if ( max == frecventa[i])
      fout << i << " ";
  fin.close();
  fout.close();
  return 0;
}
