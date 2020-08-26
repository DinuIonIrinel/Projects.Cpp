#include <bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  if ( n % 3 == 1 ) {
    cout << "NU EXISTA";
  } else {
    cout << n / 3 - 1 << " " << n / 3 << " " << n / 3 + 1;
  }
  return 0;
}
