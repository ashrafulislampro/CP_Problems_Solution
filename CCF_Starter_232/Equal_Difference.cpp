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
    vector<int> arr(n);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int cnt = 0;

    for (int l = 1; l < n; l++)
    {
        int r = l + 1;
        while (r <= n)
        {
            if ((arr[l] - arr[r]) == l - r)
                cnt++;
            r++;
        }
    }
    cout << cnt << endl;
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
// Coded by Ashraful Islam @ml.ashraful37