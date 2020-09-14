#include <bits/stdc++.h>
using namespace std;
ifstream fin("permutari.in");
ofstream fout("permutari.out");
void afisare(int v[], int n) {
  int i;
  for ( i = 1; i <= n; ++i )
    fout << v[i]  << ' ';
    fout << '\n';
}
bool validare(int v[], int lungime, int n ) {
  int i;
  for ( i = 1; i < lungime; ++i)
    if ( v[i] == v[lungime])
      return 0;
    if ( lungime <= n )
      return 1;
    return 0;
}
bool  solutie ( int lungime,int n) {
  if ( lungime == n )
    return 1;
  return 0;
 }
 void bkt(int v[], int lungime, int n,int v2[],int n2) {
   for ( int i = 1; i < n2; ++i ) {
     v[lungime] = v2[i];
     if ( validare(v,lungime,n) == 1 )
      if ( solutie(lungime,n) == 1 )
        afisare(v,n);
      else
        bkt(v,lungime + 1, n,v2,n2);
   }
 }
int main() {
  int n,v[10],n2;
  int v2[10];
  fin >> n2;
  for ( int i = 1; i <= n2; ++i) {
    fin >> v2[i];
  }
  bkt(v,1,n,v2,n2);
  return 0;
}
