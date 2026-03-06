#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        arr[i] = {y, i + 1};
    }
    sort(arr.begin(), arr.end());
    for (int l = 0, r = n - 1; l < r;)
    {
        int val = arr[l].first + arr[r].first;
        if (val > x)
            r--;
        else if (val < x)
            l++;
        else
        {
            cout << arr[l].second << " " << arr[r].second << endl;
            return;
        }
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