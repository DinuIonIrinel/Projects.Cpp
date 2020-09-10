#include <bits/stdc++.h>
using namespace std;
int frecventa[100];
int main() {
  int n;
  cin >> n;
  int x = 0;
  for ( int i = 0; i < n; ++i )
    {
      cin >> x;
      frecventa[x]++;
    }
    int perechi = 0;
    for ( int i = 1; i <= 100; ++i) {
      if ( frecventa[i] >= 2 ) {
        int f = frecventa[i];
        while ( f != 0 ) {
          perechi++;
          f = f /2;
        }
      }
    }
    cout << perechi;
  return 0;
}
