#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    ll boro = 0, choto = 0;
    for (int i = 0; i < n; i++)
    {
        ll newBoro = max(boro - a[i], b[i] - choto);
        ll newChoto = min(choto - a[i], b[i] - boro);

        boro = newBoro, choto = newChoto;
    }
    cout << boro << endl;
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