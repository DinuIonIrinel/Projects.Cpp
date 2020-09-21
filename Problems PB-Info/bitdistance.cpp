#include <iostream>
using namespace std;

int main() {
  int n, b[100], k = 1;
  cin >> n;
  while ( n != 0 )  {
    n = n / 2;
    k++;
  }
  cout << k - 2;
  return 0;
}
