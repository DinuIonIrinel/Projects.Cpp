#include <iostream>
#include <fstream>
using namespace std;
int ap[20];
int main() {
  ifstream fin("frecventa.in");
  int n;
  fin >> n;
  for (int i = 1; i <= n; i++ ) {
      int nr;
      fin >> nr;
      ap[nr] ++;
  }
  for (int i = 1; i <= 9; i++ ) {
    if ( ap[i] != 0 ) {
      cout << i << " apare de " << ap[i] << " ori ! \n";
    }
  }
  fin.close();
  return 0;
}
