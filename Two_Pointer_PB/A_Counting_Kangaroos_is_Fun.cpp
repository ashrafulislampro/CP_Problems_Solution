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
    vector<int> arr(n), f_half, l_half;
    for (auto &x : arr)
        cin >> x;

    sort(arr.begin(), arr.end());

    for (int i = 1, j = n / 2 + 1; j <= n; i++, j++)
    {
        if (i <= n / 2)
            f_half.push_back(arr[i - 1]);
        l_half.push_back(arr[j - 1]);
    }

    int l = 0, r = 0;
    while (l < f_half.size() && r < (int)l_half.size())
    {
        if (l_half[r] >= f_half[l] * 2)
            l++;
        r++;
    }

    cout << (l_half.size() + f_half.size() - l) << endl;
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