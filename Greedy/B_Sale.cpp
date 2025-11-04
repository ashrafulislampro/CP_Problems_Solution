#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, sum = 0, x;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < 0)
        {
            v.push_back(x);
        }
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < min(m, (int)v.size()); i++)
    {
        sum += abs(v[i]);
    }

    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}