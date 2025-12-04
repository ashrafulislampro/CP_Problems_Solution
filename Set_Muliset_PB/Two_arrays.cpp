#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, m;
    cin >> n;
    vector<int> mst, a;
    set<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        b.insert(x);
    }
    for (auto val : a)
    {
        if (!b.count(val))
        {
            mst.push_back(val);
        }
    }
    cout << mst.size() << endl;
    for (auto val : mst)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}