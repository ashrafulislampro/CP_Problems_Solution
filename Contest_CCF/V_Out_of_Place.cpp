#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int min_ele = *min_element(v.begin(), v.end());
    int max_ele = *max_element(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i] > v[j])
            {
                int tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
                ans++;
            }
        }
    }

    cout << ans << endl;
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