#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &x : v)
        cin >> x;
    string s = "", tmp = "", tmp2 = "";
    for (int i = 0; i < n; i++)
    {
        tmp = s + v[i];
        tmp2 = v[i] + s;

        if (tmp <= tmp2)
            s = tmp;
        else
            s = tmp2;
    }
    cout << s << endl;
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