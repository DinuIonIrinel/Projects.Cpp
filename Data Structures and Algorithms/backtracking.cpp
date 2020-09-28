/*
{1,2,3,4}
1 2 1 2

*/
#include <iostream>
using namespace std;
int st[20];
int top = 0;
int f[20] ;
int n;
void print() {
  for (int i = 1; i <= n; ++i ) {
      cout << st[i] << " ";
  }
    cout << "\n";
}
void backtracking(int top) {
  if ( top == n + 1)
    print();
  else  {
    for ( int i = 1; i <= n; ++i)
      if ( f[i] == 0 ) {
        st[top] = i;
        f[i] = 1;
        backtracking(top + 1);
        f[i] = 0;
      }
    }
}
int main() {
  cin >> n;
  backtracking(1);
  return 0;
}
