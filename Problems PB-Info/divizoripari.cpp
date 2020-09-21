#include <iostream>
using namespace std;
int main() {
  int n, k = 0;
  cin >> n;
  for ( int i = 2; i <=n; i += 2 )
    if ( n % i == 0 )
      k++;
  cout << k;
}
