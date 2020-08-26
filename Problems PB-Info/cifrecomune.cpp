#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int cifra1n = n / 10;
  int cifra2n = n % 10;
  int cifra1m = m / 10;
  int cifra2m = m % 10;
  if ( cifra1n == cifra1m || cifra1n == cifra2m || cifra2n == cifra1m || cifra2n == cifra2m) {
    cout << "da";
  } else {
    cout << "nu";
  }
  return 0;
}
