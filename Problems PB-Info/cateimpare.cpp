#include <bits/stdc++.h>
using namespace std;
int main() {
  int n = 1;
  int contor = 0;
  while ( n != 0 ) {
    cin >> n;
    if ( n % 2 == 1 ) {
      contor ++;
    }
  }
  cout << contor;
  return 0;
}
