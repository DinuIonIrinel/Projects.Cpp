#include <iostream>
using namespace std;
int main()
{   int n , m;
    cin >> n;
    m = ( ( n / 100 ) % 10 ) * 10 + n % 10;
    cout << m;
    return 0;

}
