#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, x;
    cin >> n >> x;
    deque<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.rbegin(), v.rend());

    int ans = 0;
    while (!v.empty())
    {
        if (v.size() >= 2)
        {
            int mx = v.front();
            int mn = v.back();

            if (mx+mn <= x)
            {
                ans++;
                v.pop_front(), v.pop_back();
            }
            else
            {
                ans++;
                v.pop_front();
            }
        }
        else
        {
            ans++;
            v.pop_back();
        }
    }
    cout << ans << endl;
    // for (auto val : v)
    //     cout << val << " ";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}