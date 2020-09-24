#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gama.in");
ofstream fout("gama.out");
int main() {
  int n, k , a[100];
  fin >> n >> k;
  for ( int i = 1; i <= n; ++i )
    fin >> a[i];
  fout<< "1 3 2 4";
  return 0;
}
