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
    vector<int> v(n + 1);
    map<int, int> freq;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    int val = 1, key = INT_MAX, is_ok = 0;
    for (auto [a, b] : freq)
    {
        if (val == b && a < key)
            key = a, is_ok = 1;
    }
    if (is_ok == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (key == v[i])
        {
            cout << i << endl;
            return;
        }
    }
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