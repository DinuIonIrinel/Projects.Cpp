#include <iostream>
using namespace std;
int main() {
    int a , b , c;
    cin >> a >> b >> c;
    if (  ( a > 0 )  && ( b > 0 ) && ( c > 0 ) && ( a + c ) > b && ( a + b ) > c && ( c + b ) > a ) {
        if ( a == b ) {
            cout << "Formeaza triunghi isoscel";
        }
        else if ( c == b ) {
            cout << "Formeaza triunghi isoscel";
        }
        else if ( a == c ) {
            cout << "Formeaza triunghi isoscel";
        }
        else {
            cout << "Nu formeaza triunghi isoscel";
        }
    } else {
        cout << "Nu formeaza triunghi";

    }
    return 0;
}
