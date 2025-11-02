#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, tmp = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        tmp++;
        if (x == tmp)
            tmp++;
    };
    cout << tmp << endl;
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