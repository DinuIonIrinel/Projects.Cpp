#include <bits/stdc++.h>
using namespace std;
bool prim(int number){
  if ( number == 1 )
    return false;
  for ( int divizor = 2; divizor * divizor <= number ; divizor++)
    if (number % divizor == 0)
      return false;
  return true;
}
int main() {
  int n, m, board[100][100], k = 0;
  cin >> n >> m;
  for ( int i = 0; i < n; i++ ) {
    for ( int j = 0; j < m; j++ ) {
      cin >> board[i][j];
      if ( i % 2 == 0 && prim(board[i][j]) == true )
        k++;
  }
}
  cout << k;
  return 0;
}
