#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
  queue <int> coada;
  string operatie;
  long long  valoare, n;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> operatie;
    if ( operatie == "push") {
      cin >> valoare;
      coada.push(valoare);
    }
    else if ( operatie == "front")
      cout << coada.front() << "\n";
    else
      coada.pop();

  }
  return 0;
}
