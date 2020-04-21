#include <iostream>
using namespace std;
int main(){
  long long x , y , z , mm = 0;
  cin >> x >> y >> z;
  // x < y < z
  if ( x < y && y < z){
    mm = z - x;
  }
  // x < z < y
  if ( x < z && z < y){
    mm = y - x;
  }
  // y < x < z
  if ( y < x && x < z){
    mm = z - y;
  }
  // y < z < x
  if ( y < z && z < x){
    mm = x - y;
  }
  // z < x < y
  if ( z < x && x < y){
    mm = y - z;
  }
  // z < y < x
  if ( z < y && y < x){
    mm = x - z;
  }
  cout << mm;
  return 0;
}
