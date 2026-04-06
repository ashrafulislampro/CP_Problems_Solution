#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{

    ll p = 16;
    cout << bitset<8>(p) << endl;
    if (__builtin_popcount(p))
        cout << "Power of 2 detected!\n";
    ll numOfOnes = __builtin_popcount(p);
    cout << numOfOnes << endl
         << endl;
    cout << bitset<7>(6) << endl;
    cout << bitset<7>(1) << endl;
    cout << bitset<7>(6 & 1) << endl;

    // Left Shift
    int a = 3;
    cout << a << endl;
    a = (3 << 1);
    cout << a << endl;
    a = (3 << 2);
    cout << a << endl;
    a = (3 << 3);
    cout << a << endl;
    cout << endl;
    // Right Shift
    int b = 24;
    cout << b << endl;
    b = (24 >> 1);
    cout << b << endl;
    b = (24 >> 2);
    cout << b << endl;
    b = (24 >> 3);
    cout << b << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37