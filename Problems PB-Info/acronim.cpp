#include <iostream>
#include <string>
using namespace std;
int main() {
  string sir,sir2;
  getline(cin, sir);
  if ( isupper(sir[0])) {
      sir2.push_back(sir[0]);
  }
  for (int i = 0; i <sir.size(); i++ ) {
    if ( sir[i] == ' ' && sir[i+1] != ' ' &&  isupper(sir[i+1])) {
      sir2.push_back(sir[i+1]);
    }
  }
  cout << sir2;
  return 0;
}
