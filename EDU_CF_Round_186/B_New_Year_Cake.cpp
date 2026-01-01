#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int a, b;
    cin >> a >> b;

    ll ans = 0;

    {
        // ababab
        ll A = a, B = b;
        for (int i = 0; i <= 20; i++)
        {
            ll need = 1ll << i;
            if (i & 1)
            {
                if (A >= need)
                {
                    A -= need;
                }
                else
                {
                    ans = max(ans, i);
                    
                    break;
                }
            }
            else
            {
                if (B >= need)
                {
                    B -= need;
                }
                else
                {

                    ans = max(ans, i);
                    
                    break;
                }
            }
        }
    }
    {
        // bababa
        ll A = b, B = a;
        for (int i = 0; i <= 20; i++)
        {
            ll need = 1ll << i;
            if (i & 1)
            {
                if (A >= need)
                {
                    A -= need;
                }
                else
                {

                    ans = max(ans, i);
                   
                    break;
                }
            }
            else
            {
                if (B >= need)
                {
                    B -= need;
                }
                else
                {
                    ans = max(ans, i);
                   
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}