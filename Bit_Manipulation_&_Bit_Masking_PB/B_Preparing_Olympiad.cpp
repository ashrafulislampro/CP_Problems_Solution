#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, x, l, r;
    cin >> n >> l >> r >> x;

    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        // fix the subset as the elements under this bitmask
        int total_problems = 0, total_difficulty = 0;
        int min_difficulty = 1e6 + 9, max_difficulty = 0;
        
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                total_problems++;
                total_difficulty += arr[i];
                min_difficulty = min(min_difficulty, arr[i]);
                max_difficulty = max(max_difficulty, arr[i]);
            }
        }
        if (total_problems >= 2 and total_difficulty >= l and total_difficulty <= r and abs(min_difficulty - max_difficulty) >= x)
            ans++;
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37