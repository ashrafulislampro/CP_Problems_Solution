#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    ll k;
    vector<ll> pre(31);
    for (k = 0; k <= 30; k++)
        pre[k] = k;
    for (int i = 1; i <= 30; i++)
        pre[i] += pre[i - 1];

    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        ll ans = 0, it, j;
        for (j = 0; j < n; j++)
        {
            int cnt[26] = {0};
            for (it = j; it < n; it++)
            {
                if (cnt[s[it] - 'a'] != 0)
                    break;
                cnt[s[it] - 'a']++;
            }
            ans += pre[it - j];
            ans %= 100007;
        }
        cout << "Case " << i << ": " << ans << endl;
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}