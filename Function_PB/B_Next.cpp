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
    int mx = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] != mx)
        {
            cout << v[i] << endl;
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