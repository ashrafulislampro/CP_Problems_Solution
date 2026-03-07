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
    for (auto &x : arr)
        cin >> x;

    int idx_l = 0, idx_r = 1;
    int sum = 0, mx = 0;
    mx = arr[idx_r] - arr[idx_l];
    for (int i = 0, j = 1; j < n;)
    {
        sum = arr[j] - arr[i];
        if (sum > mx)
        {
            mx = sum;
            idx_r = j;
        }
        if (arr[j] < arr[i])
        {
            i = j;
            idx_l = j;
        }
        j++;
    }
    cout << mx << " " << idx_l + 1 << " " << idx_r + 1 << endl;
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