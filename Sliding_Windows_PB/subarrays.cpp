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
    int k;
    cin >> k;

    multiset<int> mlt;
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        q.push(v[i]);
        mlt.insert(v[i]);
    }

    cout << *mlt.rbegin() << " ";
    for (int i = 0; i < n - k; i++)
    {
        int val = q.front();
        q.pop();
        auto it = mlt.find(val);
        mlt.erase(it);
        q.push(v[i + k]);
        mlt.insert(v[i + k]);
        cout << *mlt.rbegin() << " ";
    }
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