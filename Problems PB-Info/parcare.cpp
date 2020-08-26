#include <bits/stdc++.h>
using namespace std;
ifstream fin ("parcare.in");
ofstream fout ("parcare.out");
int main() {
  int zz1, zz2, ll1, ll2, hh1, hh2, mm1, mm2, optiune , t, diferenta_minute, suma_finala;
  fin >> zz1 >> ll1 >> hh1 >> mm1 ;
  fin >> zz2 >> ll2 >> hh2 >> mm2;
  fin >> t;
  fin >> optiune;
  if ( zz1 == zz2 ) {
     if ( hh1 == hh2 ) {
       diferenta_minute = mm2 - mm1;
     } else {
         diferenta_minute = ( hh2 * 60 + mm2 ) -  ( hh1 * 60 + mm1 );
     }
  }
  if ( zz1 != zz2 ) {
    if ( ll1 == ll2 ) {
     diferenta_minute = ( zz2 - zz1 ) * 1440;
    }
    if ( ll1 != ll2 ) {
      if ( ll1 == 2  ) {
        diferenta_minute  = (  28 - zz1  + zz2 ) * 1440;
      } else if (  ll1==1 or ll1==3 or ll1==5 or ll1==7 or ll1==8 or ll1==10 or ll1==12) {
        diferenta_minute = ( 30 - zz1 + zz2 ) * 1440;
      } else if (  ll1==4 or ll1==6 or ll1==9 or ll1==11) {
        diferenta_minute = ( 31 - zz1 + zz2 ) * 1440;
      }
    }
}
if ( diferenta_minute < 15 ) {
  fout << 0;
}
 else if ( optiune == 1 ) {
  fout << diferenta_minute;
}
 else if ( optiune == 2 ) {
  suma_finala = ( ( diferenta_minute / 60 ) + 1 ) * t;
  fout << suma_finala;
}
  fin.close();
  fout.close();
  return 0;
}
