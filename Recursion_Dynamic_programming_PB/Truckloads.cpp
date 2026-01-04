#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<int, int> vis, str;
int cnt = 0;
int require_truck(int box, int lim)
{
    // cnt++;
    if (box <= lim)
        return 1;
    if (vis[box] == 1)
        return str[box];
    int ans = 0;
    int left = box / 2;
    int right = box - left;
    ans += require_truck(left, lim);
    ans += require_truck(right, lim);
    vis[box] = 1;
    str[box] = ans;
    return ans;
}
void solve()
{
    int n, m;
    while (cin >> n >> m)
    {
        cout << require_truck(n, m) << endl;
        // cnt = 0;
        vis.clear();
    };
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}