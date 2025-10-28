#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, cnt_0 = 0, cnt_neg = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        if (x == 0)
            cnt_0++;
        else if (x < 0)
            cnt_neg++;
    };

    if (cnt_0)
    {
        cout << 0 << endl;
    }
    else if (cnt_neg % 2 == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
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