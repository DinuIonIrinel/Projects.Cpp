#include <iostream>
#include <string>
using namespace std;
int main() {
  string sir;
  bool da = true;
  int contor = 0;
  cin >> sir;
  for (auto it:sir) {
    if ( it == 'a' || it == 'e' || it == 'o' || it == 'u' ) {
      da = false;
    }
    else if ( it != 'i') {
      contor ++;
    }
  }
  if ( da == true && contor != 0 ) {
    cout << "DA";
  } else {
    cout << "NU";
  }
  return 0;
}
