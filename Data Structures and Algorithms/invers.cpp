#include <iostream>
using namespace std;
int invers(int number){
  int invers = 0;
  while (number != 0){
      invers  = invers * 10 + number % 10;
      number = number / 10;
  }
  return invers;
}
int main(){
    int number = 1234;
    cout << invers(number);
  return 0;
}
