#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++)
    {

        int n, r, id, cod;
        cin >> n >> r;
        map<pair<int, int>, bool> mp;
        string ans = "possible";
        for (int i = 0; i < r; i++)
        {
            cin >> id >> cod;
            if (mp[{id, cod}] == true)
            {
                ans = "impossible";
            }
            mp[{id, cod}] = true;
        }

        cout << "Scenario #" <<tc<<": "<<ans<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}