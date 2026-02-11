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
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    int q, x;
    cin >> q;
    while (q--)
    {
        cin >> x;
        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
        if (v[idx] == x)
        {
            cout << "Yes " << idx + 1 << endl;
        }
        else
        {
            cout << "No " << idx + 1 << endl;
        }
    }
}
int main()
{
    ASHRAFUL

    solve();
    return 0;
}