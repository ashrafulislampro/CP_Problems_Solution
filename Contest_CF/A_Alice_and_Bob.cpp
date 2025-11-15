#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, x, a, cnt_1 = 0, cnt_2 = 0;
    cin >> n >> a;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < a)
            cnt_1++;
        if (x > a)
            cnt_2++;
    }

    cout << ((cnt_1 > cnt_2) ? (a - 1) : (a + 1)) << endl;
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