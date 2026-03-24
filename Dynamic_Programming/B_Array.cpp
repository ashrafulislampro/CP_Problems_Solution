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
    // vector<int> arr(n);
    int arr[n];
    for (auto &x : arr)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        int res = max(count_if(arr + i + 1, arr + n, [&](int x)
                               { return x < arr[i]; }),
                      count_if(arr + i + 1, arr + n, [&](int x)
                               { return x > arr[i]; }));

        cout << res << " \n"[i + 1 == n];
    }
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37