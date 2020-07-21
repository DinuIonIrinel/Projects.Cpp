#include <iostream>
using namespace std;
//1234567891045
int main() {
    long long n;
    cin >> n;
    for ( int i = 1; i <= 6 ; ++i ) {
        n = n / 10;
    }
//1234567
    cout << ( n/100000 ) % 10 << ( n/10000 ) % 10 << " " << ( n/1000 ) % 10 << ( n/100 ) % 10 << " " << ( n/10 ) % 10 <<  n% 10;
    return 0;
}
