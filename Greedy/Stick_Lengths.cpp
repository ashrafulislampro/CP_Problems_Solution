#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (auto &x : v)
    {
        cin >> x;
    };
    sort(v.begin(), v.end());
    long long mid_val = v[n / 2];
    long long min_cost = 0;
    for (auto val : v)
    {
        min_cost += abs(mid_val - val);
    }

    cout << min_cost << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}