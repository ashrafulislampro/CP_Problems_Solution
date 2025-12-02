#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, L, ans = 0, p = 1;
    cin >> n >> m >> L;
    vector<pair<pair<int, int>, int>> v;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v.push_back({{l, r}, 1});
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({{x, y}, 0});
    }
    sort(v.begin(), v.end());
    multiset<int, greater<int>> mlt;

    for (auto [pr, id] : v)
    {
        if (id == 0)
        {
            mlt.insert(pr.second);
        }
        else
        {
            int jmp = pr.second - pr.first + 2;
            while (p < jmp)
            {
                if (mlt.empty())
                {
                    ans = -1;
                    break;
                }
                p += *mlt.begin();
                mlt.erase(mlt.begin());
                ans++;
            }
        }
        if (ans == -1)
            break;
    }

    cout << ans << endl;
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