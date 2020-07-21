#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    if ( n % 2 == 0 ) {
        cout << n - 4 << " " << n - 2;
    }
    if ( n % 2 == 1) {
        cout << n - 3 << " " << n - 1;
    }

    return 0;
}

