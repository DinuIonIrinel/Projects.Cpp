#include <bits/stdc++.h>
using namespace std;
int f[1000];
int main() {
  int a[100], n;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> a[i];
    f[a[i]]++;
  }
  for ( int i = 0; i < 9; ++i ) {
    cout << "Elementul " << i << " apare de " << f[i] << " ori !" << "\n";
  }
  return 0;
}
