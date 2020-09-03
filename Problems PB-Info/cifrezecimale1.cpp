#include <bits/stdc++.h>
using namespace std;

int c[3000];

int main()
{
    int p = 1;
    for(int i = 100 ; i <= 999 ; ++i)
    {
        int ci = i;
        c[p+2]=ci%10;
        ci/=10;
        c[p+1]=ci%10;
        ci/=10;
        c[p]=ci;
        p+=3;
    }
    int n;
    cin >> n;
    int x;
    for(int i = 1 ; i <= n ; ++i)
        cin >> x, cout << c[x] << ' ';
    return 0;
}
