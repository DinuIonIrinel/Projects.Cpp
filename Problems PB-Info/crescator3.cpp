#include <iostream>
using namespace std;
int main(){
  int A , B , C;
  cin >> A >> B >> C;
  if ( A <= B && B <= C ) {
    cout << A << "  " << B << "  " << C;
  } else if ( A <= C && C <= B) {
    cout << A << " " << C << " " << B;
  } else if ( B <= A && A <= C ) {
    cout << B << " " << A << " " << C;
  } else if ( B <= C && C <= A ) {
    cout << B << " " << C << " " << A ;
  } else if ( C <= A && A <= B ) {
    cout << C << " " << A << " " << B ;
  } else if ( C <= B && B <= A ) {
    cout << C << " " << B << " " << A ;
  }
  return 0;
}
