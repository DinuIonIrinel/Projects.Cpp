#include <iostream>
using namespace std;
int main(){
  int a , b , n;
  cin >> a >> b >> n;
  if ( n >= a && n <= b){
    cout << "DA";
  }
  else{
    cout << "NU";
  }
  return 0;
}
