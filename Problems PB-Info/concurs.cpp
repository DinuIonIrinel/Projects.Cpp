#include <iostream>
#include <fstream>
using namespace std;
int main()
{   ifstream f("coada2.in");
    ofstream g("coada2.out");
    long long x , y , z , number;
    f >> x >> y >> z;
    number = y + z - x;
    if ( number < 0)
        g << "-1";
    else
        g << number;
    f.close();
    g.close();
    return 0;

}


