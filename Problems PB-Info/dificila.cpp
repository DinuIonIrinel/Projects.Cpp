#include<iostream>
using namespace std;

long long n, c;

int main()
{
    cin >> n;
    c = n % 792;
    if (c == 0) {cout << n / 792 << ' ' << c << '\n'; return 0; }
    if(c <= 9) { cout << n / 792 + 1 << ' ' << c << '\n'; return 0; }
    else
    {
        c -= 9;
        if(c <= 180)
            if(c % 2) cout << "IMPOSIBIL\n";
            else { cout << n / 792 + 1 << ' ' << 9 + c / 2  << '\n'; return 0; }
        else
        {
            c -= 180;
            if(c % 3) cout << "IMPOSIBIL\n";
            else { cout << n / 792 + 1 << ' ' << 9 + 90 + c / 3  << '\n'; return 0; }
        }
    }
    return 0;
}
