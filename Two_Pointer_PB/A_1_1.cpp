#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int mn = 0, mx = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' and s[i + 1] == '1')
        {
            s[i] = '1';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            mx++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '1' and s[i + 1] == '1')
        {
            s[i] = '0';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            mn++;
    }
    cout << mn << " " << mx << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37