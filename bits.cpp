#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{

    string s = "zaabaaz";
    int ans = 0;
    for (char c : s)
    {
        int ss = (1 << (c - 'a'));
        cout << c << " = " << (c - 'a') << ", " << bitset<32>(ss) << endl;
        ans = ans ^ (1 << (c - 'a'));
        cout << bitset<32>(ans) << endl;
    }
    cout << ans << endl;
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