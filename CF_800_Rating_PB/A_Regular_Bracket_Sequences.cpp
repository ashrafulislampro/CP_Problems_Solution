#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, len;
    cin >> n;
    string opn_bct = "(", clo_bct = ")";
    for (int i = 0; i < n; i++)
    {
        string res = "";
        for (int j = 0; j <= i; j++)
        {
            res += opn_bct;
        }
        for (int j = 0; j <= i; j++)
        {
            res += clo_bct;
        }
        len = 2 * n - res.size();
        
        for (int j = 0; j < len / 2; j++)
        {
            res += opn_bct;
            res += clo_bct;
        }
        cout << res << endl;
    }
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