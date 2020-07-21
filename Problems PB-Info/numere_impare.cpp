#include <iostream>
using namespace std;
int main() {
    int n , i;
    cin >> n;
    for (int j = 1; j <= n; j++) {
        while( i % 2 == 1) {
            cout << i << " ";
            i ++;
        }
    }
    return 0;
}
