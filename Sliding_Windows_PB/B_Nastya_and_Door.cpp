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
    vector<int> v(n), p(n);
    for (auto &x : v)
        cin >> x;

    p[0] = 0, p[n - 1] = 0;
    for (int i = 1; i < n - 1; i++)
    {

        if (v[i] > v[i - 1] and v[i] > v[i + 1])
        {
            p[i] = 1;
        }
        else
        {
            p[i] = 0;
        }
    }

    int sum = 0, mx = 0, l = 0, r, idx = 0;
    for (int i = 0; i < k; i++)
    {
        r = i;
        sum += p[i];
    }

    mx = sum - p[l] - p[r];
    for (int i = 0; i < n; i++)
    {
        sum -= p[i];
        if (i + k >= n)
        {
            break;
        }
        sum += p[i + k];
        l = i + 1;
        r = i + k;

        int cnt = sum - p[l] - p[r];
        if (cnt > mx)
        {
            mx = cnt;
            idx = l;
        }
    }
    cout << mx + 1 << " " << idx + 1 << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37