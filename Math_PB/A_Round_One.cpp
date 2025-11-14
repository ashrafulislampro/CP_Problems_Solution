#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(3, 0);
    v[n - 1] = n;
    v[m - 1] = m;

    for (int i = 0; i < 3; i++)
    {
        if (v[i] == 0)
        {
            cout << i + 1 << endl;
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