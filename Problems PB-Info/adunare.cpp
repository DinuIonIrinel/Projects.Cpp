#include <iostream>
#include <fstream>
using namespace std;
int main() {
  ifstream fin("adunare.in");
  ofstream fout("adunare.out");
  int a, b;
  fin >> a >> b;
  fout << a + b;
  fin.close();
  fout.close();
  return 0;
}
