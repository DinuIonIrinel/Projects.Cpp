#include <iostream>
#include <string.h>
using namespace std;
int frecventa[200];
int main() {
  char sir[200], vocale[] = "AEIOUaeiou";
  cin.get(sir,200);
  int i = 0;
  while ( sir[i] != '\0') {
    if ( strchr(vocale,sir[i]) != 0) {
      frecventa[(int) sir[i]] ++;
    }
      i++;
  }
  int max = 0, val = 0;
  for (int j = 0; j < 200; j++ ) {
    if ( frecventa[j] > max ) {
      max = frecventa[j];
      val = j;
    }
  }
  cout << (char) (val - 32);
  return 0;
}
