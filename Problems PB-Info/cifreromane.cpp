#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre_romane.in");
ofstream fout("cifre_romane.out");
int main() {
  int n;
  fin >> n;
  while (n != 0 ) {
    if ( n == 1 ) {
      cout << "I";
    } else if ( n  == 5 ) {
        cout << "V";
    } else if ( n  == 10 ) {
        cout << "X";
    } else if ( n  == 50 ) {
        cout << "L";
    } else if ( n  == 100 ) {
        cout << "C";
    }  else if ( n  == 500 ) {
        cout << "D";
    } else if ( n  == 1000 ) {
        cout << "D";
    }
    n = n / 10;
  }
  return 0;
}
