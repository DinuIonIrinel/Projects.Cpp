#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, i , j = 1, z = 0;
  cin >> n;
    int s = 0;
    while ( j  < 10000000  ) {
      if ( sqrt( j ) == int ( sqrt ( j ))) {
         s += j;
         cout << s << " ";
         z ++;
      }
        j++;
        if ( z == n ) {
          break;
        }
    }
  return 0;
}
