#include <iostream>
using namespace std;
int main() {
    int n , m , p;
    cin >> n >> m;
    p=(n/2)*(m/2)+(n%2)*(m/2)+(m%2)*(n/2)+(n%2)*(m%2);
    cout << p;
    return 0;
}
