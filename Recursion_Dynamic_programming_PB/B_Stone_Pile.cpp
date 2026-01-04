#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;
vector<int> v;
int rec_fun(int i, int left, int right)
{
    if (i == n)
        return abs(left - right);

    int left_return = rec_fun(i + 1, left + v[i], right);
    int right_return = rec_fun(i + 1, left, right + v[i]);

    return min(left_return, right_return);
}
void solve()
{
    cin >> n;
    v.resize(n + 1);
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