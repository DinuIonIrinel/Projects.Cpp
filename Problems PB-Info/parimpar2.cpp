#include <bits/stdc++.h>
using namespace std;
ifstream fin("parimpar2.in");
ofstream fout("parimpar2.out");
int main() {
  int nr_par = 0, nr_impar = -1;
  int i, p, a[1000], k = 0, contor = 0, contor2 = 0;;
  fin >> i >> p;
  int x;
  while ( fin >> x ) {
        a[k++] = x;
  }
  for ( int  j = 0; j < k; ++j ) {
    if ( a[j] % 2 == 0 ) {
      contor++;
      if ( contor == p ) {
          nr_par = a[j];
      }
    }
 }
 for ( int  j = 0; j < k; ++j ) {
   if ( a[j] % 2 == 1 ) {
     contor2++;
     if ( contor2 == i ) {
       nr_impar = a[j];
     }
   }
}
if ( nr_par == 0 || nr_impar == -1 ) {
  fout << "Nu exista";
} else {
  fout << nr_par << " " << nr_impar;
}
  fin.close();
  fout.close();
  return 0;
 }
