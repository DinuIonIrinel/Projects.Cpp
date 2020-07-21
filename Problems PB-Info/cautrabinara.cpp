#include <iostream>
using namespace std;
// VARIANTA RECURSIVA DE CAUTARE_BINARA
const int N = 5;
int arr[N] = {1,2,3,4,5};
int cautare_binara( int left , int right , int x ) {
    if ( left > right )
        return -1;
    else {
        int mid = ( left + right ) / 2;
        if ( arr[mid] == x ) {
            return mid;
        }
        if ( x < arr[mid]) {
            return ( left , mid - 1 , x);
        }
        if ( x > arr[mid]) {
            return ( mid + 1 , right , x);
        }
    }

}
int main() {
    cout << cautare_binara( 0 , N  , 2);
    return 0;
}
