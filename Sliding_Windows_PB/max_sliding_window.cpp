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
    map<int, int> freq; // value of freq
    deque<int> q;

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        // insert element
        freq[v[i]]++;
        q.push_back(v[i]);

        // delete element
        while (freq[v[i]] > 1)
        {
            int tmp = q.front();
            q.pop_front();
            freq[tmp]--;
        }
        // for (auto val : q)
        //     cout << val << " ";
        // cout << endl;
        ans = max(ans, (int)q.size());
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
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37