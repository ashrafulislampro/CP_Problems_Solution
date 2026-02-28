#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> v = {0, 1, 2, 3, 4, 5, 6};
    int tmp = 0;
    for (int i = 6; i >= 2; i--)
    {
        if (s % i == 0 && s / i <= n)
        {
            v.erase(v.begin() + (i));
            int mx = *max_element(v.begin(), v.end());
            tmp = mx * n;
        }
    }

    int rem = s / 6;
    int sum = 0;

    if (rem == n)
    {
        sum = rem * 5;
    }
    else
    {
        sum = rem * 5 + (n - rem) * 6;
    }

    cout << max(sum, tmp) << endl;
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