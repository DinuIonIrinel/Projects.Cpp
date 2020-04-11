#include <iostream>
using namespace std;
const int n = 4;
int arr[n] = {1 ,2 , 3 , 5 };
int binary_search(int x){
  int left  = 0;
  int right = n ;
  int sol = - 1;
  while ( left <= right){
    int mid = ( left + right ) / 2;
    if ( arr[mid] == x)
        return mid;
    else if ( arr[mid] < x )
        left = mid + 1;
    else
        right = mid - 1;
    }
  return sol;
}
int main(){
  cout << binary_search(3);
  return 0;
}
