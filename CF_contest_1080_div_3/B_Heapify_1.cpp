#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> target(n + 1, 0), vis(n + 1, 0);
    iota(target.begin(), target.end(), 0);
    // for (auto val : target)
    //     cerr << val << " ";
    // cerr << endl;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
            continue;
        vector<int> needed_ele, targetki;
        for (int j = i; j <= n; j *= 2)
        {
            needed_ele.push_back(v[j]), targetki.push_back(target[j]), vis[j] = true;
        }
        sort(needed_ele.begin(), needed_ele.end());
        if (needed_ele != targetki)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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