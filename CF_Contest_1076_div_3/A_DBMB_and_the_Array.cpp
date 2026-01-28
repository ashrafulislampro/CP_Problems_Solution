#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, s, x, ele;
    cin >> n >> s >> x;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        sum += ele;
    }

    if (s == sum)
    {
        cout << "YES" << endl;
        return;
    }

    while (sum <= s)
    {
        sum += x;
        if (s == sum)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}