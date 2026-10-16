
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    ll ans = n - 1;

    for (ll i = 2; i <= n;)
    {
        ll rem = n / i;

        if (rem < 2)
            break;

        ll r = n / rem;

        ans += (r - i + 1) * (rem - 1);
        i = r + 1;
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();

    return 0;
}
