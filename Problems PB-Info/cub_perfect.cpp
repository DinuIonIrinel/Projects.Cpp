#include <bits/stdc++.h>
using namespace std;
bool is_perfect_cube(int n) {
    int root(round(cbrt(n)));
    return n == root * root * root;
}
int main() {
  int n;
  long long x;
  cin >> n;
  cin >> x;
  if(is_perfect_cube(x)){
    cout << "DA" << "\n";
  } else {
    cout << "NU" << "\n";
  }
  for ( int  i = 0; i < n - 1; ++i ) {
    cin >> x;
    if(is_perfect_cube(x)) {
      cout << "DA" << "\n";
    } else {
      cout << "NU" << "\n";
    }
  }
  return 0;
}
