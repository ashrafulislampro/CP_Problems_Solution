#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    vector<int> v = {1, 3, 4, 4, 6, 7, 7, 7, 9, 12};
    int l = lower_bound(v.begin(), v.end(), 4) - v.begin();
    int r = upper_bound(v.begin(), v.end(), 4) - v.begin();

    cout << l << " " << r << " " << r - l << endl;
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