#include <iostream>
using namespace std;
int max(int arr[],int size)
{ int max = 0;
  for ( int index  = 0 ; index < size; ++index)
    {if ( arr[index] > max )
      max = arr[index];}
  return max;
}
int main(){
  const int size = 5;
  int arr[size] = {1,2,33,4,5};
  cout << max(arr,size);

  return 0;
}
