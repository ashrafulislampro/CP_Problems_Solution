#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, m, k = 0, i;
    cin >> n >> m;

    if (n > m)
    {
        cout << 0 << endl;
        return;
    }

    for (i = 63; i >= 0; i--)
    {
        int n_b = (1LL & (n >> i));
        int m_b = (1LL & (m >> i));

        if (n_b == m_b)
            continue;
        if (n_b)
            break;

        k ^= (1LL << i);
    }
    n = (n ^ k);

    if (n == m)
    {
        for (i = 0; i < 64; i++)
        {
            if ((1ll & (n >> i)))
                continue;

            k >>= i;
            k <<= i;
            k ^= (1ll << i);
            break;
        }
    }

    cout << k << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37