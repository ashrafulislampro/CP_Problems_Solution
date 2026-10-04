#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        ll n, m, q;
        cin >> n >> m >> q;

        vector<ll> a(m);

        for (ll &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());

        while (q--)
        {
            ll cur;
            cin >> cur;

            // Before the first marked point
            if (cur < a.front())
            {
                cout << a.front() - 1 << '\n';
                continue;
            }

            // After the last marked point
            if (cur > a.back())
            {
                cout << n - a.back() << '\n';
                continue;
            }

            // Between two marked points
            auto it = lower_bound(a.begin(), a.end(), cur);
            ll right = *it;
            ll left = *(it - 1);

            cout << (right - left) / 2 << '\n';
        }
    }

    return 0;
}