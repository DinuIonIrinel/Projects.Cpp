#include <iostream>

using namespace std;

int main()
{
    double r,a,p;
    const double PI = 3.14159265358979323846;
    cin >> r;
    p = 2 * PI* r;
    a = PI* r * r;
    cout << a << " " << p;
    return 0;
}
