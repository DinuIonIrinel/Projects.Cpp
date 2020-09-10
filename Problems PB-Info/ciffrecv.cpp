#include <bits/stdc++.h>
using namespace std;
int frecventa[100];
ifstream fin("ciffrecv.in");
ofstream fout("ciffrecv.out");
bool prim(int number){
  if (number == 1 ) {
    return false;
  }
  for ( int divizor = 2; divizor <= sqrt(number); divizor++)
    if (number % divizor == 0)
      return false;
  return true;
}
int main() {
  int number = 0;
  while( fin >> number)
    if ( prim(number) == true )
      frecventa[number]++;
  for ( int i = 9; i > 0; --i) {
    if ( frecventa[i] != 0  ) {
      fout << i << " " << frecventa[i];
      break;
    }
  }
  fin.close();
  fout.close();
  return 0;
}
