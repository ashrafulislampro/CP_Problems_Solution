#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> v;
int n;
ll rec_fun(int i, ll left, ll right)
{
    if (i == n)
        return abs(left - right);
    ll left_r = rec_fun(i + 1, left + v[i], right);
    ll right_r = rec_fun(i + 1, left, right + v[i]);

    return min(left_r, right_r);
}
void solve()
{

    cin >> n;
    v.resize(n+1);
    for (auto &x : v)
        cin >> x;
    cout << rec_fun(0, 0, 0) << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}