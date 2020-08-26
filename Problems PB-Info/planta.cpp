#include <bits/stdc++.h>
using namespace std;
ifstream fin("planta.in");
ofstream fout("planta.out");
int main() {
  int d, a, b, n, lungime = 0;
  fin >> d >> a >> b >> n;
  lungime = d;
  int i = 1;
  while ( i <= n ) {
    if ( i % 2 == 1 ) {
      lungime = lungime + a;
    } else {
      lungime = lungime - b;
    }
    i++;
  }
  fout << lungime;
  fin.close();
  fout.close();
  return 0;
}
