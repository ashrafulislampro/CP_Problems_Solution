#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int ans = 0;

    for (int i = n - 1; i > 0; i--)
    {
        if (v[i - 1] > v[i])
        {
            int tmp = v[i];
            v[i] = v[i - 1];
            v[i - 1] = tmp;
            ans++;

            while (i - 2 > 1 && v[i - 2] > v[i - 1] && v[i - 2] == v[i])
            {
                i--;
                int tmp = v[i];
                v[i] = v[i - 1];
                v[i - 1] = tmp;
            }
        }
    }

    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}