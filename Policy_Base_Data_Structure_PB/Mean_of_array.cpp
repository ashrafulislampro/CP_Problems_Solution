#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &x : arr)
        cin >> x;

    int ans = 0, l = 0, r = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum / (r - l + 1) >= k)
        {
            ans++;
            cerr << "Outside = " << r << " " << l << endl;
            while (l <= r)
            {

                if (l < r)
                {
                    sum -= arr[l];
                    l++;
                }
                else
                    break;

                if (sum / (r - l + 1) >= k)
                {
                    ans++;
                    cerr << "Inside = " << r << " " << l << endl;
                }
            }
        }

        // if ()

        r++;
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37