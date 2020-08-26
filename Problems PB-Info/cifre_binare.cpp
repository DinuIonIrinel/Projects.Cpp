#include <iostream>
using namespace std;
int main() {
  int numar1, numar2;
  cin >> numar1 >> numar2;
  int  u1 = 0 , u2 = 0;
  int copie1 = numar1;
  int copie2 = numar2;
  while ( copie1 != 0 ) {

    if ( copie1 % 2 == 1){
      u1++;
    }
    copie1 = copie1 / 2;
  }
  while ( copie2 != 0 ) {
    if ( copie2 % 2 == 1 ) {
      u2++;
    }
    copie2 = copie2 / 2;
  }
  if (u1 > u2 ) {
    cout << numar1;
  } else if (u2 > u1 ) {
    cout << numar2;
  } else if ( u1 == u2 ) {
    if ( numar1 > numar2 ) {
      cout << numar2;
    } else {
      cout << numar1;
    }
  }
  return 0;
}
