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

    int l = 0, r = n - 1, s_sum = 0, d_sum = 0;
    int i = 0;
    while (l <= r)
    {
        i++;
        if (i % 2 == 1)
        {
            if (arr[l] > arr[r])
            {
                s_sum += arr[l];
                l++;
            }
            else
            {
                s_sum += arr[r];
                r--;
            }
        }
        else
        {
            if (arr[l] > arr[r])
            {
                d_sum += arr[l];
                l++;
            }
            else
            {
                d_sum += arr[r];
                r--;
            }
        }
    }
    cout << s_sum << " " << d_sum << endl;
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