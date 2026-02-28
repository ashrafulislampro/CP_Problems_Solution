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

    string s;
    cin >> s;
    vector<int> seat, cost;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            seat.push_back(i + 1);
            cost.push_back(v[i]);
        }
    }
    if (seat.size() >= k)
    {
        sort(cost.begin(), cost.end());
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += cost[i];
        cout << sum << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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