#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main() {
    fstream f("9lan.in");
    ofstream g("9lan.out");
    int n;
    f >> n;
    if ( n % 2 == 0 ) {
        g << "1";
    } else {
        g << "9";
    }
    f.close();
    g.close();
    return 0;

}
