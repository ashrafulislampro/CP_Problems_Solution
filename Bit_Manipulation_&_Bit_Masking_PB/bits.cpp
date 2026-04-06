#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{

    int x = 8;
    x = x & (-1);
    cout << bitset<8>(x) << endl;
    cout << bitset<8>(-1) << endl;
    cout << bitset<8>(x & (-1)) << endl;
    cout << x << endl;

    cout << bitset<10>(x) << endl;
    cout << __builtin_popcount(x) << endl;
    cout << __lg(x) << endl;
    cout << (1 << __lg(x)) << endl;

    string s = "zaabaaz";
    int ans = 0;
    for (char c : s)
    {
        ans = ans ^ (1 << (c - 'a'));
    }

    if (ans == 0 || (ans & (ans - 1)) == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    int a = 5;

    if (a & (1 << 0))
        cout << "ON" << endl;
    else
        cout << "OFF" << endl;

    if ((a >> 2) & 1)
        cout << "ON" << endl;

    cout << bitset<32>(a) << endl;  // Binary Representation of a
    cout << bitset<32>(~a) << endl; // Binary of Not a
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37