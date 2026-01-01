#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
struct cmp
{
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        return a.second < b.second;
    }
};
void solve()
{
    string s;

    priority_queue<pair<int, string>> pq;
    map<string, int> mp;

    while (cin >> s)
    {
        if (s == "ADD")
        {
            string id;
            int val;
            cin >> id >> val;
            pq.push({val, id});
            mp[id] = val;
        }
        else if (s == "CHANGE")
        {
            string id;
            int val;
            cin >> id >> val;
            pq.push({val, id});
            mp[id] = val;
        }
        else
        {
            while (mp[pq.top().second] != pq.top().first)
            {
                pq.pop();
            }
            cout << pq.top().second << " " << pq.top().first << endl;
            pq.pop();
        }
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}