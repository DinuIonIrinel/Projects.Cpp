#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, array[25], p, x;
  cin >> n >> x >> p;
  for (int i = 1; i <=n; ++i )
    cin >> array[i];
  for (int i = n ; i >= p; --i )
    array[i + 1 ] = array[i];
    array[p] = x;
  n++;
  for (int i = 1; i <=n; ++i )
    cout <<  array[i] << " ";
  return 0;
}
