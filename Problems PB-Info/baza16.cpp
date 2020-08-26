#include <iostream>
using namespace std;
int main() {
  int n, k = 0, sir[200];
  cin >> n;
  while ( n!= 0 ) {
    k++;
    sir[k] = n % 16;
    n = n / 16;
  }
  for ( int i = k; i >= 1; i-- ) {
    if ( sir[i] < 10 ) {
      cout << sir[i];
    }
    else if ( sir[i] == 10 ) {
      cout << "A";
    }
    else if ( sir[i] == 11 ) {
      cout << "B";
    }
    else if ( sir[i] == 12 ) {
      cout << "C";
    }
    else if ( sir[i] == 13 ) {
      cout << "D";
    }
    else if ( sir[i] == 14 ) {
      cout << "E";
    }
    else if ( sir[i] == 15 ) {
      cout << "F";
    }
  }
  return 0;
}
