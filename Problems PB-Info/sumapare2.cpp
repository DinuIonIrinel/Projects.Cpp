#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, board[100][100];
  cin >> n;
  cin >> m;
  int sum = 0;
  for ( int i = 0 ; i <  n; ++i ) {
    for ( int j = 0 ; j < m; ++j ) {
      cin >> board[i][j];
        if ( board[i][j] % 2 == 0 )
          sum += board[i][j];
  }
}
  cout << sum;

}
