#include <iostream>
using namespace std;
int main()
{   int n , p = 1;
    cin >> n;
    p = ( ( n / 100 ) % 10 ) * ( n % 10 );
    cout << p;
    return 0;

}
