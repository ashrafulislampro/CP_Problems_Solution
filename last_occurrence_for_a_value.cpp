#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> v = {1, 3, 4, 4, 6, 7, 7, 7, 9, 12};
bool isOk(int i, int k)
{
    if (v[i] <= k)
        return 0;
    return 1;
}
void solve()
{
    int n = 10, k = 7;
    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (isOk(mid, k))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;            
        }
    }
    cout << "last occurrence = " << l - 1 << endl;
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