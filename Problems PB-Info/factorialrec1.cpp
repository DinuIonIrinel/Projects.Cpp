#include <iostream>
using namespace std;
void factorial(int n, int f) {
    if (n == 0 )
         f = 1;
    else
         f = n * factorial(n - 1);
}
int main() {
    factorial(2,f);
    return 0;
}
