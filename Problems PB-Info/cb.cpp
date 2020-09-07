#include <bits/stdc++.h>
using namespace std;

int main()
{   int n, T;
    long long a[ 200000];
    cin >> n >> T;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    long long x, y;

    for (int i = 1; i <= T; ++i)
    {
        cin >> x >> y;
        int p2 = upper_bound(a ,a + n, y) - a;
        int p1 = lower_bound(a , a+ n, x) - a;
        if (p1 == -1)
            cout << 0 << '\n';
        else
            cout << p2 - p1 <<  '\n';

    }

}
