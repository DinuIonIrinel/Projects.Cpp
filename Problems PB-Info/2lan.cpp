#include <iostream>
#include <fstream>
using namespace std;
// 1 2 4 6 8 2 4 6 8
int main() {
    fstream fin("2lan.in");
    ofstream out("2lan.out");
    int  n;
    fin >> n;
    if ( n == 0 ) {
        out << "1";
    }
    else if ( n % 4 == 1)
    {
        out << "2";
    }
    else if ( n % 4 == 2)
    {
        out  << "4";
    }
     else if ( n % 4 == 3)
    {
        out  << "8";
    }
     else if ( n % 4 == 0)
    {
        out << "6";
    }
    fin.close();
    out.close();
    return 0;
}
