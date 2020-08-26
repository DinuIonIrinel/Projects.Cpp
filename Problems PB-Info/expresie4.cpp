#include <iostream>
using namespace std;
int main() {
  int n, sum = 0;
  cin >> n;
  int j = n;
  int i = 1;
  while ( i <= n ) {
    sum += i * j;
    i++;
    j--;
  }
  cout << "Rezultatul este " << sum;
  return 0;
}
