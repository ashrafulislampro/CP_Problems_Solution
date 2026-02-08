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
    vector<int> arr;
    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    int i, j;
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {

        arr.push_back(v[i]);
        arr.push_back(v[j]);
    }
    if (n % 2 == 1)
    {
        arr.push_back(v[i]);
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
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