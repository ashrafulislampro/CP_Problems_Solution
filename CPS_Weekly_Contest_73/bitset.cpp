#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{

    bitset<32> bset;
    bset = 7;
    // get binary string from decimal number...
    cout << bset << endl;

    bitset<32> bsets(string("111"));
    // get decimal number from binary string
    cout << bsets.to_ullong() << endl;

    // all of the bits are zero.
    bitset<32> bsetss;
    cout << bsetss.to_ullong() << endl;

    // all of the bits are one
    bitset<32> bsetsss;
    bsetsss.set();
    cout << bsetsss << endl;

    // all of the bits are zero
    bitset<32> bsetssss;
    bsetssss.reset();
    cout << bsetssss << endl;

    // how many one are exist in the bitset?
    bitset<5> bst(10);
    cout << bst << " " << bst.count() << endl;
    bst.flip();
    cout << bst << " " << bst.count() << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}