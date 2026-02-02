#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> v = {5, 6, 7, 8, 9, 12, 1, 3, 4};
bool isOk(int i)
{
    if (v[i] >= v[0])
        return 1;
    return 0;
}
void solve()
{
    int n = 9;
    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (isOk(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << n - l << " " << v[l] << endl;
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