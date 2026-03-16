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
    cin >> n;
    vector<pair<ll, int>> arr;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr.push_back({x, i});
    }
    sort(arr.rbegin(), arr.rend());

    // for (int i = 0, j = 1; i < n - 2; i++, j++)
    // {
    //     ll val = arr[i].first + arr[j].first;
    //     for (int k = n-1; k > j; k--)
    //     {
    //         if (val != arr[k].first)
    //         {
    //             cout << arr[i].second << " " << arr[j].second << " " << arr[k].second << endl;
    //             return;
    //         }
    //     }
    // }
    for (int i = 0; i < n - 2; i++)
    {
        ll val = arr[i].first;
        for (int j = i + 1, k = n - 1; j < k; k--, j++)
        {
            if (arr[i].first + arr[j].first != arr[k].first)
            {
                cout << arr[i].second << " " << arr[j].second << " " << arr[k].second << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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