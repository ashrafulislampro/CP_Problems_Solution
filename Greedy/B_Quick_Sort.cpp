#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, tmp = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
        if (x == tmp + 1)
            tmp++;
    }
    tmp = n - tmp;
    cout << (tmp + k - 1) / k << endl;
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