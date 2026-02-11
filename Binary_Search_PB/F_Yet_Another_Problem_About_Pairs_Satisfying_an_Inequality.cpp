#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x;
    cin >> n;
    vector<int> val_arr, idx_arr;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x < i)
        {
            val_arr.push_back(x);
            idx_arr.push_back(i);
        }
    }

    ll ans = 0;
    for (int i = 0; i < (int)val_arr.size(); i++)
    {
        ans += lower_bound(idx_arr.begin(), idx_arr.end(), val_arr[i]) - idx_arr.begin();
    }
    cout << ans << endl;
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