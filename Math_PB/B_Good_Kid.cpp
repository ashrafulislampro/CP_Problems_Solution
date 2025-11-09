#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, sum = 1;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    auto it = min_element(v.begin(), v.end());
    int val = *it + 1;
    v.erase(it);
    sum *= val;
    for (auto x : v)
        sum *= x;
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}