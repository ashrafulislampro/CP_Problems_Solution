#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    vector<pair<int, int>> pr;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pr.push_back({x, i});
    }
    sort(pr.begin(), pr.end(), [](auto &a, auto &b)
         { return a.first > b.first; });
    // for (auto val : pr)
    // {
    //     cout << val.first << " " << val.second << endl;
    // }
    int f_lar = pr[0].first, s_lar = pr[1].first;
    // for (int i = 1; i < n; i++)
    // {
    //     if (pr[i].first < f_lar)
    //     {
    //         s_lar = pr[i].first;
    //         break;
    //     }
    // }
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int ele = pr[i].first, key = pr[i].second;

        if (ele != f_lar)
        {
            v[key] = ele - f_lar;
        }
        else
        {
            v[key] = ele - s_lar;
        }
    }
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
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