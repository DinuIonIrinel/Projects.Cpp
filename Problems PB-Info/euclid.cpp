#include <iostream>
using namespace std;
int main() {
  int a, b, r;
  cin >> a >> b;
  while ( b != 0 ) {
    r = a % b;
    a = b;
    b = r;
  }
  cout << a;
}
/*
20 10 0
10 0
->10

50 8 2
8 2 0
2 0
->2
*/
