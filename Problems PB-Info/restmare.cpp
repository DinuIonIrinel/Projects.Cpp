#include <bits/stdc++.h>
using namespace std;
ifstream fin("restmare.in");
ofstream fout("restmare.out");
int main() {
  long long n;
  fin >> n;
  int sum = 0, max = 0;
  for ( int i = 1; i <= n; ++i) {
    if (i % 2 == 0)
      sum += ( i / 2 ) - 1;
    else if ( i % 2 == 1)
      sum += ( i / 2);
  }
  fout << sum;
  fin.close();
  fout.close();
  return 0;
}
