#include <iostream>
#include <fstream>
using namespace std;
int main()
{   long long N , M , nr_maxim , rest , x;
    ifstream f("zmeu.in");
    ofstream g("zmeu.out");
    cin >> N >> M;
    x = 2 * M;
    nr_maxim = N / x ;
    rest = x - ( N % x);
    g << nr_maxim << endl;
    g << rest;
    f.close();
    g.close();
    return 0;
}


