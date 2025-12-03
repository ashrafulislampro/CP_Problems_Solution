#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, c, mx_val = 0, tmp = 0;
    cin >> n >> c;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
            mx_val += v[i];
        else
            tmp += v[i];
    }

    if (tmp > c && mx_val >= c)
    {
        cout << (mx_val + tmp - c) << endl;
    }
    else
    {
        cout << mx_val << endl;
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