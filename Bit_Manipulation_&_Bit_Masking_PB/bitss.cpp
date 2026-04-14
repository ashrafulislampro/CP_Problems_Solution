#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{

    // fast exponentiation (Binary)
    int res = 1;
    int j = 10, a = 2;
    while (j)
    {
        if (j & 1)
        {
            res *= a;
            cout << "a = " << a << endl;
        }
        a *= a;
        cout << "aa == " << a << endl;
        j >>= 1;
    }
    cout << res << " " << 4 * (16 * 16) << endl;
    // Get Most Significant Bit (MSB) position
    int nn = 7;
    int msb = log2(nn);
    cout << msb << endl;
    // clear i-th bit
    int n = 8;
    cout << bitset<8>(n) << endl;
    n = n & (~(1 << 1));
    cout << bitset<8>(n) << endl;

    // toggle i-th bit
    int p = 8;
    cout << bitset<8>(p) << endl;
    p = p ^ (1 << 1);
    cout << bitset<8>(p) << endl;

    cout << endl;

    // remove last set
    int k = 7;
    cout << bitset<8>(k) << endl;
    k = k & (k - 1);
    cout << bitset<8>(k) << endl;
    cout << endl;
    // get last set bit(LSB)
    int lsb = 10;
    cout << bitset<8>(lsb) << endl;
    lsb = lsb & (-lsb);
    cout << bitset<8>(lsb) << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37