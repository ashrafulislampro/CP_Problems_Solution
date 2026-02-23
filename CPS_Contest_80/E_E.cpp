#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, sum = 0, x;
    cin >> n;
    vector<string> v(n);
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> x;
        sum += x;
        v[i] = s;
    }
    sort(v.begin(), v.end());
    int mod = sum % n;
    cout << v[mod] << endl;
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