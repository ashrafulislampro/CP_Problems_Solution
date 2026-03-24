#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll n, c, k, x;
    cin >> n >> c >> k;
    multiset<int, greater<int>> mlt;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mlt.insert(x);
    }

    while (!mlt.empty())
    {
        for (auto it = mlt.begin(); it != mlt.end(); it++)
        {
            if (*it <= c)
            {
                ll tmp = c - *it;
                if (k >= tmp)
                {
                    k -= tmp;
                    c += (*it + tmp);
                    mlt.erase(it);
                }
                else
                {
                    c += (*it + k);
                    k = 0;
                    mlt.erase(it);
                }
                break;
            }
        }
        ll mn = *min_element(mlt.begin(), mlt.end());
        if (mn > c)
            break;
    }
    cout << c << endl;
    // for (auto val : mlt)
    // {
    //     cout << val << " ";
    // }
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