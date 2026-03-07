#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x, y;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> y;
        arr[i-1] = {y, i};
    }
    sort(arr.begin(), arr.end());
   
    for (int l = 0, r = n - 1; l < r;)
    {
        int val = arr[l].first + arr[r].first;
        if (val == x)
        {
            cout << arr[l].second << " " << arr[r].second << endl;
            return;
        }
        else if (val > x)
            r--;
        else
            l++;
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37