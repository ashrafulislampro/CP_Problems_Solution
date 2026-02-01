#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

vector<int> arr = {1, 3, 4, 4, 6, 7, 9};
bool isOk(int i, int k)
{
    if (arr[i] >= k)
        return 0;
    return 1;
}
void solve()
{

    int n = 7, k = 6;

    int l = 0, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (isOk(mid, k))
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << " " << r << endl;
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