#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
struct cmp
{
    bool operator()(pair<ll, ll> &a, pair<ll, ll> &b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }
};
void solve()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<pair<int, int>>v;
    for (int i = 0; i < n; i++)
    {
        ll t, c;
        cin >> t >> c;
        v.push_back({t, c});
    }
    sort(v.begin(), v.end());

    for(int i = 0; i<n; i++){
        pq.push(v[i].second);
        if(pq.size() > v[i].first)
            pq.pop();
    }
    
    ll sum = 0;
    while (!pq.empty())
    {
        sum += pq.top();        
        pq.pop();
        
    }

    cout << sum << endl;

}
int32_t main()
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