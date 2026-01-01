#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr.push_back({{x, 0}, i});
        arr.push_back({{y, 1}, i});
    }
    sort(arr.begin(), arr.end());
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 1; i <= n; i++)
    {
        pq.push(i);
    }
    vector<int> room_id(n);
    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i].first.second == 0)
        {
            room_id[arr[i].second] = pq.top();
            pq.pop();
        }
        else
        {
            pq.push(room_id[arr[i].second]);
        }
    }
    cout << *max_element(room_id.begin(), room_id.end()) << endl;
    for (auto val : room_id)
    {
        cout << val << " ";
    }
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}