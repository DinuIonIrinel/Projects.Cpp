#include <bits/stdc++.h>
using namespace std;
ifstream fin("muzical.in");
ofstream fout("muzical.out");
int main() {
  int n, sum = 0, rest = 0;
  fin >> n;
  for ( int i = 0; i < n; ++i ) {
    char nota[4];
    fin >> nota;
    if ( strcmp("do1",nota) == 0 ) {
      sum += 0;
    } else if ( strcmp("re",nota) == 0 ) {
      sum += 1;
    } else if ( strcmp("mi",nota) == 0 ) {
      sum += 2;
    } else if ( strcmp("fa",nota) == 0 ) {
      sum += 3;
    } else if ( strcmp("sol",nota) == 0 ) {
      sum += 4;
    } else if ( strcmp("la",nota) == 0 ) {
      sum += 5;
    } else if ( strcmp("si",nota) == 0 ) {
      sum += 6;
    } else if ( strcmp("do2",nota) == 0 ) {
      sum += 7;
    }
     rest = sum % 8;
  }
  switch (rest) {
    case 0:
      fout << "do1";
      break;
    case 1:
      fout << "re";
      break;
      case 2:
        fout << "mi";
        break;
      case 3:
        fout << "fa";
        break;
        case 4:
          fout << "sol";
          break;
        case 5:
          fout << "la";
          break;
          case 6:
            fout << "si";
            break;
          case 7:
            fout << "do2";
            break;
  }
  fin.close();
  fout.close();
  return 0;
}
