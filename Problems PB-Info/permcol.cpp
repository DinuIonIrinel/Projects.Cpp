#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, board[100][100], a[100];
  cin >> n >> m;
  for ( int i = 0; i < n; ++i ) {
    for ( int j = 0; j < m; ++j )
      cin >> board[i][j];
  }
  for ( int i = 0; i < n; ++i ) {
      a[k++] = b[i][0];
  }
  for ( int i = 0; i < n; ++i ) {
    for ( int j = 0; j < m; ++j ) {
      board[i][j] = board[i][j+1];
  }
}
  for ( int i = 0; i < n; ++i ) {
    for ( int j = 0; j < m; ++j ) {
      cout << board[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
