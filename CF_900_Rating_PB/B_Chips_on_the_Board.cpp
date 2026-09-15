#include <bits/stdc++.h>
using namespace std;
using li = long long;
void solve()
{
    li n;
    cin >> n;
    vector<li> v(n), vec(n);
    for (auto &x : v)
        cin >> x;
    for (auto &x : vec)
        cin >> x;

    li mn_a = *min_element(v.begin(), v.end());
    li sum_a = accumulate(v.begin(), v.end(), 0LL);
    li mn_b = *min_element(vec.begin(), vec.end());
    li sum_b = accumulate(vec.begin(), vec.end(), 0LL);

    li ans = min(mn_a * n + sum_b, mn_b * n + sum_a);
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}