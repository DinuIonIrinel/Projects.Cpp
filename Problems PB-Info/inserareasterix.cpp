#include <iostream>
#include <string>
using namespace std;
bool faravocale = false;
int main() {
  string sir, vocale = "aeiou", sir2;
  getline(cin, sir);
  for (int i = 0; i < sir.size(); i++ ){
    sir2.push_back(sir[i]);
    if (vocale.find(sir[i]) != string::npos ) {
      sir2.push_back('*');
      faravocale = true;
    }
  }
  if (faravocale == true) {
    cout << sir2;
  } else {
    cout << "FARA VOCALE";
  }

  return 0;
}
