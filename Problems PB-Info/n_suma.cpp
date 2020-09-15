#include <bits/stdc++.h>
using namespace std;
ifstream fin("n_suma.in");
ofstream fout("n_suma.out");
int main() {
  int n, sum = 0;
  fin >> n;
  for ( int i = 0; i < n; ++i ) {
    int x;
    fin >> x;
    sum += x;
  }
  fout << sum;
  fin.close();
  fout.close();
  return 0;
}
