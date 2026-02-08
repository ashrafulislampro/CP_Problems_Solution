#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ":" << endl;

        int n, q, l, r;
        cin >> n >> q;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;
        while (q--)
        {
            cin >> l >> r;
            int srt = lower_bound(v.begin(), v.end(), l) - v.begin();
            int lst = upper_bound(v.begin(), v.end(), r) - v.begin();

            cout << lst - srt << endl;
        }
    }
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}