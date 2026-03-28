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
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int k = n - 1;
    for (int i = 1; i <= k; i++)
    {
        int cnt_1 = 0, cnt_2 = 0;
        for (int j = i + 1, l = 1; j <= n or l <= i;)
        {
            if (l <= i)
            {
                if (arr[l] == 2)
                    cnt_1++;
                l++;
            }
            if (j <= n)
            {
                if (arr[j] == 2)
                    cnt_2++;
                j++;
            }
        }
        if (cnt_1 == cnt_2)
        {
            cout << i << endl;
            return;
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