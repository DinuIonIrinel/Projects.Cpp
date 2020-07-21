#include <iostream>
using namespace std;
int main() {
    int  R , G , B;
    cin >> R >> G >> B;
    int maxim = 0;
    int minim = 256;
    if ( R > maxim )
        maxim  = R;
    if ( G > maxim )
        maxim = G;
    if ( B > maxim )
        maxim = B;
    if ( R < minim )
        minim  = R;
    if ( G < minim )
        minim = G;
    if ( B < minim )
        minim = B;
    if (   minim >= 0  && maxim <= 255 )  {
            if ( maxim - minim  < 10 ) {
               cout << "GRI";
            } else {
               cout << "CULOARE";
            }
    } else {
        cout << "NU E CULOARE";
    }

    return 0;
}
