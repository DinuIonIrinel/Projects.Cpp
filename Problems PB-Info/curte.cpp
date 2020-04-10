#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int arie = 0;
    int perimetru = 0;
    cin >> a >> b;
    arie = a * b;
    perimetru = 2 * ( a + b );
    cout << arie << " " << perimetru;
    return 0;

}
