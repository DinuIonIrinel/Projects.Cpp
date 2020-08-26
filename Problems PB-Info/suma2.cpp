#include <iostream>
using namespace std;
int main() {
  int s = 0, n;
  cin >> n;
  for ( int i = 2; i <= ( n * 2 ) ; i = i + 2) {
    s += i;
  }
  cout << s;
  return 0;
}
