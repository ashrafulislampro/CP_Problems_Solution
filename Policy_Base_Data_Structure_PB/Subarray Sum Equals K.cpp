#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int x, k;
    vector<int> nums;
    cin >> k;
    while (cin >> x)
    {
        nums.push_back(x);
    }

    int sz = nums.size();

    vector<int> pre(sz + 1);
    pre[0] = 0;
    for (int i = 1; i <= sz; i++)
        pre[i] = pre[i - 1] + nums[i - 1];

    map<int, int> frq;
    frq[pre[0]] = 1;
    int ans = 0;
    for (int r = 1; r <= sz; r++)
    {
        int val = pre[r] - k;
        ans += frq[val];
        frq[pre[r]]++;
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