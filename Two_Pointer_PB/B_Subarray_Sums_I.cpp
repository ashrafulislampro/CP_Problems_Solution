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
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    int cnt = 0, sum = 0;
    for (int i = 0, r = 0; i < n && r < n;)
    {
        sum += arr[r];
        while (sum > x)
        {

            sum -= arr[i];
            i++;
        }
        if (sum == x)
        {
            cnt++;
            sum -= arr[i];
            i++;
        }
        r++;
    }
    cout << cnt << endl;
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