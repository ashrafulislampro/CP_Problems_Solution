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

    vector<int> v;
    v.push_back(n);
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j < n; j++)
        {
            if (abs(v.back() - j) % i == 0 && find(v.begin(), v.end(), j) == v.end())
            {
                v.push_back(j);
            }
        }
    }
    reverse(v.begin(), v.end());
    for (auto val : v)
        cout << val << " ";
    cout << endl;
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