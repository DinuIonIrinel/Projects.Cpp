#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main() {
  char sir[200];
  ifstream fin("prosir.in");
  ofstream ofin("prosir.out");
  fin.get(sir,200);
  int lungime = strlen(sir);
  for ( int i = 0; i < lungime; i++) {
    if ( sir[i] != ' ' && ( sir[i + 1] == ' ' || sir[i+1] == '\0' ) ) {
      sir[i] = '5';
    } else if( sir[i] == '.' ) {
      sir[i] = '5';
    }
  }
  for ( int i = 0; i < lungime; i++ ) {
    ofin << sir[i];
  }
  fin.close();
  ofin.close();
  return 0;
}
