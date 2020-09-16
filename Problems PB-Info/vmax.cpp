#include <iostream>
using namespace std;
int main() {
  int n, a[1000], max = 0, ap = 0;
  cin >> n;
  for (int i = 1; i <= n; ++i )
    cin >> a[i];
 for (int i = 1; i <= n; ++i ) {
   if( a[i] > max ) {
     max = a[i];
     ap = 1;
   }
   else if ( max == a[i])
     ap++;
   }
  cout << max << " " << ap ;
  return 0;
}
