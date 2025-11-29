#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k, x;
    cin >> n >> k;

    map<int, int> q, r;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        r[x]++;
    }
    ll ans = 0;
    for (ll i = 2; i <= k; i++)
    {
        for (ll j = 1; j < i; j++)
        {
            ll d = i / j;
            ll rem = i % j;
            cout << d << " " << rem << endl;
            if (q.count(d) && r.count(rem))
            {
                ans++;
                q[d]--;
                r[rem]--;
                if (q[d] == 0)
                    q.erase(q[d]);
                if (r[rem] == 0)
                    r.erase(r[rem]);
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}