#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    long x , y , z , lungime;
    ifstream f("coada.in");
    ofstream g("coada.out");
    f >> x >> y >> z;
    lungime = y + z - x;
    if ( x >= y || x >= z){
        g << "-1";
      }
    else{
        g << lungime;
    }

    return 0;
}
