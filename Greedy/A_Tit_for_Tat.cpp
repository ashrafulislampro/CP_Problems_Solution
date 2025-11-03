#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    while (m--)
    {

        for (int i = 0; i < n; i++)
        {

            if (v[i])
            {
                v[i]--;
                v[n - 1]++;
                break;
            }
        }
    }
    for (auto val : v)
        cout << val << " ";
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