#include <iostream>
using namespace std;
int suma_cifre(int numar ) {
    int suma = 0;
    while ( numar != 0)
    {   suma = suma + numar % 10;
        numar = numar / 10;
    }
    return suma;
}
int main() {
    int a , b, c , maxim = 0;
    cin >> a >> b >> c;
    if ( suma_cifre(a) > maxim )
        maxim = suma_cifre(a);
    if ( suma_cifre(b) > maxim )
        maxim = suma_cifre(b);
    if ( suma_cifre(c) > maxim )
        maxim = suma_cifre(c);
    if ( maxim == suma_cifre(a))
        cout << a << " ";
    if ( maxim == suma_cifre(b))
        cout << b << " ";
     if ( maxim == suma_cifre(c) )
        cout << c << " ";

    return 0;
}
