#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    map<int, int> cnt;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int p = 0; p <= 30; p++)
        {
            int sum = (1 << p);
            int need = sum - v[i];
            ans += cnt[need];
        }
        cnt[v[i]]++;
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