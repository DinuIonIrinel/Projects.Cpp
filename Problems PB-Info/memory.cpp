#include <iostream>
using namespace std;
int main() {
int *a, b, c, d;
a = &b;
a = &c;
*a = 2;
cout << b << " " << c;
return 0;
}
