#include <fstream>
using namespace std;
ifstream fin("bacterie.in");
ofstream fout("bacterie.out");
long long n,m,minim,inf;
int main()
{
    fin >> n >> m;
    minim = n;
    if(m < minim)
        minim = m; //variabila minim va retine numarul de ani dupa care se opreste expansiunea
    inf = minim * (minim + 1) / 2; //inf retine numarul de comitate infectate dupa oprirea expansiunii bacteriei
    fout << n * m - inf << '\n';
    fout.close();
    return 0;
}
