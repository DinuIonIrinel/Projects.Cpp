#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
    if ( b == 0 )
        return a;
    else
        return cmmdc(b, a % b);
}
int main() {
   cout << cmmdc(8,4);
}
