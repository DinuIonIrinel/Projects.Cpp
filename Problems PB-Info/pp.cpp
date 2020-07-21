#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if ( sqrt(n) == int ( sqrt(n)) )
        cout << "da";
    else
        cout << "nu";
    return 0;
}
