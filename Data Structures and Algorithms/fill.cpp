#include <iostream>
#include <math.h>
using namespace std;
bool a[100][100];
bool v[100][100];
int n, m;
int cnt = 0;
int zone = 0;
int cnt_max = 0;
void input() {
  cin >> n >> m;
  for (int i =1; i <= n; ++i) {
    for ( int j =1; j <= m; ++j)
      cin >> a[i][j];
  }
}
void print() {
  for (int i =1; i <= n; ++i) {
    for ( int j =1; j <= m; ++j) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}
void fill(int i,int j) {
  v[i][j] = 1;
  cnt++;
  if (a[i-1][j] == 1 && !v[i-1][j]) fill(i-1,j);
  if (a[i+1][j] == 1 && !v[i+1][j]) fill(i+1,j);
  if (a[i][j-1] == 1 && !v[i][j-1]) fill(i,j-1);
  if (a[i][j + 1] == 1 && !v[i][j + 1]) fill(i,j +1 );
}
void rezolve() {
  for (int i =1; i <= n; ++i) {
    for ( int j =1; j <= m; ++j)
      if ( a[i][j] == 1 && !v[i][j]) {
        cnt = 0;
        zone++;
        fill(i,j);
        cnt_max = max(cnt_max,cnt);
      }
  }
}
int main() {
  input();
  rezolve();
  print();
  return 0;
}
