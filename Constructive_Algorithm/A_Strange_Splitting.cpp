#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int f_ele = v.front();
    int l_ele = v.back();

    if (f_ele == l_ele)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl
             << "RB";
        for (int i = 2; i < n; i++)
            cout << "R";
        cout << endl;
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