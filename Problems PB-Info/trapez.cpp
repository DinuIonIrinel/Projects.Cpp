#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double b , B , l  , x , x2 , h, d;
    cin >> B >> b >> l;
    x = ( B - b ) / 2;
    x2 = B - x;
    h = sqrt( l * l - x * x );
    d = sqrt ( x2 * x2  + h * h );
    cout << d;
    return 0;

}
