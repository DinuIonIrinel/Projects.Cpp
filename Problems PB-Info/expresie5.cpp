#include <iostream>
#include <math.h>
using namespace std;
int main() {
 int n;
 long long sum = 0, p = 1;
  cin >> n;
  for (int i = 1; i <= n; i++ ) {
    p = pow(i,i);
    sum += p;
  }
  cout << "Rezultatul este " << sum;
  return 0;
}
