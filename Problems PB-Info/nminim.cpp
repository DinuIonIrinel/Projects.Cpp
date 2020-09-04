#include <bits/stdc++.h>
using namespace std;
int main() {
  int n , a[1000];
  cin >> n;
  int minim = 1000000000;
  for ( int  i = 0 ; i < n; ++i ) {
    cin >> a[i];
    if ( a[i] < minim ) {
      minim = a[i];
    }
  }
    cout << minim;
  return 0;
}
