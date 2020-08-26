#include <iostream>
using namespace std;
int main() {
  int n, sum = 0;
  cin >> n;
  for ( int i = 1; i <= n; i++ )
      {
        for (int j = i + 1; j <= n + 1; j++ ){
          sum = sum + j;
        }
      }
  cout << "Rezultatul este " << sum;
  return 0;
}
