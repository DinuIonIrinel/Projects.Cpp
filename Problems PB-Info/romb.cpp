#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double d1, d2 , l , a , p;
    cin >> d1 >> d2;
    l = sqrt(  ( d1 / 2 ) * ( d1 / 2 ) + ( d2 / 2 ) * ( d2 / 2 )  );
    a = ( d1 * d2 ) / 2;
    p = l * 4;
    cout << p << " " << a;
    return 0;
}
