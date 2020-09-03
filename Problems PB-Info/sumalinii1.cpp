#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, board[100][100];
  cin >> n;
  cin >> m;
  int sum = 0, max = 0;
  for ( int i = 0 ; i <  n; ++i ) {
    for ( int j = 0 ; j < m; ++j ) {
      cin >> board[i][j];
    }
  }
  for ( int i = 0 ; i <  n; ++i ) {
    for ( int j = 0 ; j < m; ++j ) {
      if ( board[i][j] > max )
      max = board[i][j];
      sum += board[i][j];
    }
      cout << sum - max << " ";
      max = 0;
      sum = 0;
  }
  return 0;
}
