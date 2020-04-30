#include <iostream>
using namespace std;
int main(){
  int N;
  cin >> N;
    if ( N % 3 == 0 && N % 2 == 0 ) {
    cout << "fizzbuzz ";
  }
  else if ( N % 3 == 0){
    cout << "buzz";
  }
  else if (  N % 2 == 0 ) {
    cout << "fizz";
  }

  return 0;
}
