#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, x;
    cin >> n;
    multiset<ll> mst;

    while (n--)
    {
        cin >> x;
        mst.insert(x);
    }

    ll cost = 0;
    while (mst.size() > 1)
    {
        ll a = *mst.begin();
        mst.erase(mst.begin());
        ll b = *mst.begin();
        mst.erase(mst.begin());
        cost += (a + b);
        mst.insert(a + b);
    }
    cout << cost << endl;
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