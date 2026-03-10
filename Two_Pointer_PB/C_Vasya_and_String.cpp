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
    string s;
    cin >> s;

    int ans = 0, l = 0, r = 0, cnt_a = 0, cnt_b = 0;
    while (r < n)
    {
        if (s[r] == 'a')
            cnt_a++;
        else
            cnt_b++;

        while (!(cnt_a <= k || cnt_b <= k))
        {
            
            if (s[l] == 'a')
                cnt_a--;
            else
                cnt_b--;
            l++;
        }
        ans = max(ans, r - l + 1);

        r++;
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37