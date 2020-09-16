#include <iostream>
using namespace std;
int main() {
  int n, cadouri[20] , k = 0, max = 0;
  cin >> n;
  for ( int i = 1; i <= n; ++i )
    cin >> cadouri[i];
  for ( int i = 1; i <= n /2 ; ++i ) {
    for ( int j = n / 2 + 1; j <= n; ++j  )
      if ( cadouri[j] > cadouri[i] )
        k++;
  }
  cout << k;
  return 0;
}
