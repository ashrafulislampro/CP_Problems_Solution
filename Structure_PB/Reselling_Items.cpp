#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;

    sort(arr.rbegin(), arr.rend());

    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < k and arr[i] >= 5)
        {
            profit += (arr[i] - 5);
        }
        else if (arr[i] >= 10)
        {
            profit += (arr[i] - 10);
        }
    }
    cout << profit << endl;
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