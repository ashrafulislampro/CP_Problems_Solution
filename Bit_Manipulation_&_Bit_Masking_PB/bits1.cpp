#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n = 10;
    cout << bitset<8>(n) << endl;
    // 1. __builtin_popcount(n); count 1s in interger;
    //  __builtin_popcountl(n); count 1s in long;
    //  __builtin_popcountll(n); count 1s in long long;

    //  cout<<__builtin_popcount(n)<<endl;

    // 2. __builtin_parity(n); it's return the parity of odd/even. if the number has odd number of 1s then it return 1 and if the number has even number of 1s then it return 0.

    // cout << __builtin_parity(n) << endl;

    // 3. __builtin_clz(n); this function return the number of leading zeros before the first occurrence of 1.

    // cout << __builtin_clz(n) << endl;

    // 4. __builtin_ctz(n); this function return the number of trailing zeros after the first occurrence of 1 from the right side.

    // cout << __builtin_ctz(n) << endl;

    // int x = 1e9;
    // for(int i = 0; i < 30; i++){
    //     if((x&(1<<i)) != 0)cout<<i<<" ";
    // }

    int a = 36, b = 59;
    cout << (a & b) << endl;
    cout << bitset<8>(a & b) << endl;
    for (int i = 62; i < 70; ++i)
    {
        cout << "for i = " << i << " val = " << (1LL << i) << "\n";
    }
    cout << "For seperate i = 66 val = " << (1LL << 66) << "\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37