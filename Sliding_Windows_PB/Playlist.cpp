#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    map<int, int> freq;
    queue<int> q;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq[v[i]] == 0)
        {
            freq[v[i]]++;
            q.push(v[i]);
            ans = max(ans, (int)q.size());
        }
        else
        {
            while (freq[v[i]] != 0)
            {
                int ele = q.front();
                q.pop();
                freq[ele]--;
            }
            freq[v[i]]++;
            q.push(v[i]);
            ans = max(ans, (int)q.size());
        }
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