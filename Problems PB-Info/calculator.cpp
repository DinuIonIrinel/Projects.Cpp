#include <iostream>
using namespace std;
int a , b ;
char s ;
int main() {
cin >> a >> b >> s;
if ( s == '+') {
    cout << a + b;
}
if ( s == '-' && a < b ) {
    cout << b - a;
}
if ( s == '-' && a > b ) {
    cout << a - b;
}
if ( s == '*') {
    cout << a * b;
}
if ( s == '/' && a < b ) {
    cout << b / a;
}
if ( s == '/'&& a > b ) {
    cout << a / b;
}
    return 0;}


