#include <iostream>
using namespace std;
int main(){
  long long  n;
  int  contor = 0;
  cin >> n;
  int uc = n  % 10;
  contor = 1;
  n = n / 10;
  while ( n != 0 ) {
    if ( uc == n  % 10 ) {
      contor ++;
    }
    n = n / 10;
  }
  cout << contor;
  return 0;
}
