#include <iostream>
using namespace std;
int main() {
    double v;
    long long d;
    int t;
    cin >> v;
    cin >> d;
    t = d / ( v * 1000 / 60 );
    cout << t;
    return 0;
}
