#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int lost_n = v[0];
    for (int i = 1; i < n; i++)
    {
        if (++lost_n != v[i])
        {
            cout << lost_n << endl;
            return;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}