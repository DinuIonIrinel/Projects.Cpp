#include <bits/stdc++.h>
using namespace std;
bool prim(int number){
  if (number == 1 ) {
    return false;
  }
  for ( int divizor = 2; divizor <= sqrt(number); divizor++)
    if (number % divizor == 0)
      return false;
  return true;
}
int main() {
  int n, array[1000];
  cin >> n;
  for ( int  i = 1; i <= n; ++i ) {
    cin >> array[i];
  }
  for ( int  i = 1; i <= n; ++i ){
    if (prim(array[i]) == true ) {
    for(int j = i + 1; j <= n; ++j)
            array[j-1] = array[j];
            n--;
            i--;
  }
}
  for ( int  i = 1; i <= n; ++i ) {
    cout << array[i] << " ";
  }
  return 0;
}
