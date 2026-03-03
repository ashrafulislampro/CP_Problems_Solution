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
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    queue<int> q;
    map<int, int> freq;
    int cnt = 0, i, ans = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] > k)
        {
            q.push(v[i]);
            continue;
        }
        if (freq[v[i]] == 0)
            cnt++;
        freq[v[i]]++;
        q.push(v[i]);

        if (cnt == k)
            break;
    }

    if (i == n)
    {
        cout << 0 << endl;
        return;
    }
    ans = q.size();

    while (i < n)
    {
        int ele = q.front();
        q.pop();
        if (ele > k)
        {
            ans = min(ans, (int)q.size());
            continue;
        }
        freq[ele]--;
        while (freq[ele] == 0 && i < n)
        {
            if (v[++i] > k)
            {
                q.push(v[i]);
                continue;
            }
            freq[v[i]]++;
            q.push(v[i]);
        }
        ans = min(ans, (int)q.size());
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