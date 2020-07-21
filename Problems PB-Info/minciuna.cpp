#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int x , y;
    cin >> x >> y;
    if ( abs (y - x ) < 1)
    {
        cout << "minciuna";

    } else {
        if ( x % 2 == 0 ) {
            cout <<"Andrei e mai responsabil";
        } else
         cout << "minciuna";
    }
    return 0;
}
