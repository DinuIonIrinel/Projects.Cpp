#include <bits/stdc++.h>
using namespace std;
fstream fin("af.in");
ofstream fout("af.out");
int main() {
  long long n1, n2, n3, n;
  char operatie, egal;
  fin >> n;
  for ( int i = 0; i < n; ++i ) {
    fin >> n1 >> operatie >> n2 >> egal>> n3;
    if ( operatie == '+') {
      if ( n1 + n2 == n3 ) {
        fout << "Adevarat" << '\n';
      } else {
        fout << "Fals"<< '\n';
      }
    }
    else if ( operatie == '-') {
      if ( n1 - n2 == n3 ) {
        fout << "Adevarat"<< '\n';
      } else {
        fout << "Fals"<< '\n';
      }
    }
    else if ( operatie == 'x') {
      if ( n1 * n2 == n3 ) {
        fout << "Adevarat"<< '\n';
      } else {
        fout << "Fals"<< '\n';
      }
    }
    else if ( operatie == ':') {
      if( n2 == 0 ) {
        fout << "Fals" << '\n';
      } else if ( n1 / n2 == n3 ) {
        fout << "Adevarat"<< '\n';
      } else {
        fout << "Fals"<< '\n';
      }
    }
  }
    fout.close();
    fin.close();
    return 0;
}
