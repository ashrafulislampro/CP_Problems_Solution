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
        ll n, m, ans = 0;
        cin >> n >> m;

        for (int i = 0; i <= 30; i++)
        {
            ll p = 1LL << i;
            ll num = min(n / p, m);           
            ans += num;           
            n -= num * p;
            if (num <= 0)
                break;
        }

        cout << ans << '\n';
    }

    return 0;
}