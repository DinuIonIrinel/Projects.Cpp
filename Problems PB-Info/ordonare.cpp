#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> vector;
  int n;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    int x;
    cin >> x;
    vector.push_back(x);
  }
  sort(vector.begin(),vector.end());
  for ( auto it: vector )
    cout << it << " ";
  return 0;
}
