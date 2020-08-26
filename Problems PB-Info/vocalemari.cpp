#include <iostream>
#include <string.h>
using namespace std;
char vocale[]= "aeiou";
int lungime = 0;
int main() {
  char sir[20];
  cin >> sir;
  lungime = strlen(sir) ;
  for ( int i = 0; i <  lungime; i++) {
    if ( strchr( vocale, sir[i] )!= 0 ) {
    sir[i] = sir[i] - 32 ;
    }
  }
  cout << sir;
  return 0;
}
