#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x;
    cin >> n;
    vector<pair<int, int>> od, ev;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            ev.push_back({x, i + 1});
        }
        else
        {
            od.push_back({x, i + 1});
        }
    }

    if (od.size() >= 3)
    {
        cout << "YES" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << od[i].second << " ";
        }
        cout << endl;
        return;
    }
    if (ev.size() >= 2 and od.size() >= 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << ev[i].second << " ";
        }
        cout << od[0].second << endl;
        return;
    }
    cout << "NO" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}