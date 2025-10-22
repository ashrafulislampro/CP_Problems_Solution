#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;

    for (int i = 1; i <= n; i++)
    {
        int div = gcd(i, n);
        v.push_back({i, div});
    }
    sort(v.begin(), v.end(), cmp);

    for (auto val : v)
    {
        cout << val.first << " ";
    }
    cout << endl;
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