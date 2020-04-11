#include <iostream>
using namespace std;
int min(int arr[],int size)
{ int min = arr[size - 1];
  for ( int index  = 0 ; index < size; ++index)
    {if ( arr[index] < min )
      min = arr[index];}
  return min;
}
int main(){
  const int size = 5;
  int arr[size] = {44,2,33,4,5};
  cout << min(arr,size);

  return 0;
}
