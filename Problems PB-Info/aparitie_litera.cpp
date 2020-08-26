#include <iostream>
#include <string>
using namespace std;
int frecventa[256];
int main() {
  char sir[256];
  cin.get(sir,256);
  int i = 0;
  while ( sir[i] != '\0') {
    if ( sir[i] != ' ' ) {
      frecventa[(int) sir[i]] ++;
    }
      i++;
  }
  int max = 0, val = 0;
  for ( int j = 50; j <= 256;  j++ ) {
    if (frecventa[j] > max) {
      max = frecventa[j];
      val = j;
    }
  }
  cout << (char)val;
  return 0;
}
