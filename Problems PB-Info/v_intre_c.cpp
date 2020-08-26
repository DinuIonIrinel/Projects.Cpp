#include <iostream>
#include <string.h>
using namespace std;
char vocale[] = "aeiou",consoane[]="bcdfghjklmnpqrstvwxyz";
int contor , i;
int main() {
  char sir[300];
  cin.get(sir,300);
  for ( i = 1; i < strlen(sir) - 1; i++ )
    if (strchr(vocale,sir[i])!=0 && strchr(consoane,sir[i+1])!= 0  && strchr(consoane,sir[i-1]) != 0 )
      contor++;
  cout << contor;
  return 0;
}
