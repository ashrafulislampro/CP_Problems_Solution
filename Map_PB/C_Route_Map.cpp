#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v(n), vec(m);
    for (auto &x : v)
        cin >> x;
    for (auto &x : vec)
        cin >> x;

    for (int i = 0, j = 0; i < n; i++)
    {
        if (v[i] == vec[j])
        {
            cout << "Yes" << endl;
            j++;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}