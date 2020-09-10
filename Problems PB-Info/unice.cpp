#include <bits/stdc++.h>
using namespace std;
ifstream fin("unice.in");
ofstream fout("unice.out");
int frecventa[100];
int main() {
  int n;
  fin >> n;
  int x = 0;
  for ( int i = 0 ; i < n; ++i ) {
    fin >> x;
    frecventa[x]++;
  }
  for ( int i = 0; i <= 99; ++i )
    if ( frecventa[i] == 1)
      fout << i << " ";
  fin.close();
  fout.close();
  return 0;
}
