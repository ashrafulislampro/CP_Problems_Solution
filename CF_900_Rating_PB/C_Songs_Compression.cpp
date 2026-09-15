#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    long long sum = 0, a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum += a;
        v[i] = a - b;
    }

    if (sum <= m)
    {
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < n; ++i)
    {

        if (sum - v[i] <= m)
        {
            cout << i + 1 << endl;
            return;
        }

        sum -= v[i];
    }
    if (sum <= m)
    {
        cout << n << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}