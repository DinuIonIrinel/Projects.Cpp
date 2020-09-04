#include <bits/stdc++.h>
using namespace std;
int main() {
  stack <int> stiva;
  string operatie;
  int n;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> operatie;
    if ( operatie == "push") {
      int x;
      cin >> x;
      stiva.push(x);
    }
    else if ( operatie == "top") {
      cout << stiva.top() << "\n";
    } else {
      stiva.pop();
    }
  }
  return 0;
}
