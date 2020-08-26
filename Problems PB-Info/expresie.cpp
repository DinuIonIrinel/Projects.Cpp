#include <iostream>
using namespace std;
int main(){
  int n, factorial = 1, sum = 0;
  cin >> n;
    for ( int  i = 1; i <=n ; i++ ) {
      factorial = factorial * i;
      sum = sum + factorial;
  }
  cout << sum;
  return 0;
}
