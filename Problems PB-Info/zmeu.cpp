#include <iostream>
#include <fstream>
using namespace std;
int main()
{

  long long n,m,z,x,nr_zmee,rest;
  ifstream f("zmeu.in");
  ofstream g("zmeu.out");
  f >> n >> m;
  x = 2 * m;
  nr_zmee = n / x;
  rest = x - ( n % x );
  if ( n < m)
  {
    g << "0";
  }
  else{
    g << nr_zmee << endl;
    g << rest;
  }
  return 0;

}
