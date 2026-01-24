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

    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }
    int mx = INT_MIN;
    for (auto [key, val] : freq)
    {
        if (val > mx)
            mx = val;
    }
    cout << mx << endl;
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