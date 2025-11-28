#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int Q, K;
    ll e, sum = 0;
    cin >> Q >> K;
    map<string, ll> mp;
    vector<ll> v;
    string x;
    for (int i = 0; i < Q; i++)
    {
        cin >> x >> e;
        mp[x] += e;
    }

    for (auto [key, val] : mp)
    {
        v.push_back(val);
    }
    sort(v.rbegin(), v.rend());
    int i = 0;

    while (K-- && i < v.size())
    {
        sum += v[i++];
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