#include <bits/stdc++.h>
using namespace std;
fstream fin("maxcadou.in");
ofstream fout("maxcadou.out");
int main() {
  long long n;
  vector<int> vector;
  fin >> n;
  while ( n !=0 ) {
    vector.push_back(n % 10 );
    n = n / 10;
  }
  sort(vector.begin(),vector.end());
  for (int i = vector.size() - 1; i >= 0; --i ) {
    fout << vector[i] ;
  }
  fin.close();
  fout.close();
  return 0;
}
