#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char sir[256];
  cin.get(sir,256);
  int lungime = strlen(sir);
  sir[0] -= 32;
  sir[lungime - 1 ] -= 32;
  for ( int i = 0; i < lungime; i++ ) {
    if ( ( sir[i] != ' ' && sir[i + 1] == ' ' ) || ( sir[i] != ' ' && sir[i - 1] == ' ' )){
      sir[i] -= 32;
    }
  }
  for (int i = 0; i < lungime; i++ ) {
    cout << sir[i] ;
  }
  return 0;
}
