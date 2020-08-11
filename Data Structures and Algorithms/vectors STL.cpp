#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    //v.pop_back();
    //v.size();
    //v.erase();
    //v.begin();
    //v.size();
    //v.shrink_to_fit();
    //v.insert();
    //sort(v.begin(), v.end());
    //v.clear();
    //v.capacity();
    v = {2, 5, 1, 24, 13};
    for ( int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
        }
    return 0;
}
