#include <iostream>
using namespace std;
int HA , HB , D , X;
int main() {
    cin >> HA;
    cin >> HB;
    cin >> D;
    if ( HA == HB )
    {
        X = D / 2;
    }
    else if ( HB < HA ) {
        X = ( HB * HB + D * D - HA * HA ) / ( 2 * D );

    }
    else if ( HA < HB ) {
         X = ( HA* HA+ D * D - HB * HB ) / ( 2 * D );
    }
    else {
        X = - X;
    }
    cout << X;
    return 0;
}
