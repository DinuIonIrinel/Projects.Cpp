#include <bits/stdc++.h>
using namespace std;
bool pp(int n) {
  if ( sqrt(n) == int ( sqrt(n) ) )
    return true;
  return false;
}
int main() {
  vector <int> patrate;
  for ( int i = 1; i < 1000; ++i)
    if ( pp(i) == true)
      patrate.push_back(i);
  int n, sum = 0;
  cin >> n;
  for ( int j = 0; j < n; ++j)
    sum += patrate[j];

  cout << "Rezultatul este " << sum;
  return 0;
}
