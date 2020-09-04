#include <bits/stdc++.h>
using namespace std;
int stiva[100], st = 1, dr = 0;
bool empty() {
  return st > dr;
}
void pop() {
  if (!empty())
    --dr;
}
int top() {
  if (!empty())
    return stiva[dr];
}
void push(int val) {
  stiva[++dr] = val;
}
int main() {
  int n;
  string operatie;
  cin >> n;
  for ( int i = 0; i < n; ++i ) {
    cin >> operatie;
  if ( operatie == "push" ) {
    int x;
    cin >> x;
    push(x);
  } else if ( operatie == "pop") {
    pop();
  } else if ( operatie == "top" ) {
    cout << top() << "\n";
  }
}
  return 0;
}
