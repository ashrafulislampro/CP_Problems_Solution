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
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;

    map<int, int> cnt;
    queue<int> q;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        q.push(arr[i]);
        cnt[arr[i]]++;
        while ((int)cnt.size() > k)
        {
            int val = q.front();
            q.pop();
            cnt[val]--;
            if (cnt[val] == 0)
                cnt.erase(val);
        }
        ans += q.size();
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
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37