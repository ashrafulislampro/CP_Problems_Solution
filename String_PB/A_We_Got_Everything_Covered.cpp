#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<char> v(26);
    for (int i = 0; i < 26; i++)
    {
        v[i] = 'a' + i;
    }

    string res = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            res += v[j];
        }
    }
    cout << res << endl;
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