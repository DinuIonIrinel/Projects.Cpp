#include <iostream>
using namespace std;
int main()
{   int n ;
    int newn;
    cin >> n;
    newn =  ( n % 10 ) * 10  + (n / 10) % 10;
    cout << newn * newn;
    return 0;

}
