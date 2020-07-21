#include <iostream>
using namespace std;
int a , b ;
char s ;
int main() {
cin >> a >> b >> s;
if ( s == "+") {
    cout << a + b;
}
if ( s == "-") {
    cout << a - b;
}
if ( s == "*") {
    cout << a * b;
}
if ( s == "/") {
    cout << a / b;
}
    return 0;}

