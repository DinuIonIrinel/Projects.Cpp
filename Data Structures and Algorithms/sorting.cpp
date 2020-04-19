#include <iostream>
using namespace std;
void sorting (int arr[],int n)
{ int aux = 0;
  for (int i = 0; i < n ; i++)
    { for ( int j = 0;  j < n ; j++)
      //sorting ascending
          if ( arr[i] < arr[j])
            { aux = arr[i];
              arr[i] = arr[j];
              arr[j] = aux;}
        }

}
int main(){
  int n = 10;
  int arr[10] = {1,5,6,2,3,8,9,4,10,42};
  sorting(arr,n);
  for ( int i = 0; i < n ; i++)
    cout << arr[i] << " ";
  return 0;
}
