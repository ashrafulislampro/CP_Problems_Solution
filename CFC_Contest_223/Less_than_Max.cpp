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

    vector<int> ans;

    for (int i = 0, j = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            ans.push_back(v[i]);
            j++;
            continue;
        }
        if (ans.size() > 0 && (v[i] - 1) == ans[j-1])
        {
            ans.push_back(v[i]);
            j++;
        }
    }
    cout << ans.size() << endl;
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