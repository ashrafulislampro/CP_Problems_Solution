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

    int ans = 0, A_sum = 0, B_sum = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        if (A_sum == 0)
            A_sum += arr[l++];
        else if (A_sum < B_sum)
            A_sum += arr[l++];
        else
            B_sum += arr[r--];

        if (A_sum == B_sum)
            ans = l + n - r - 1;
    }
    cout << ans << endl;
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