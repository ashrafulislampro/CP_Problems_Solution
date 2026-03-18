#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
struct Triangle
{
    int a, b, c;
    ll area;
    void compute()
    {
        ll s = a + b + c;
        area = s * (s - 2LL * a) * (s - 2LL * b) * (s - 2LL * c);
    }
};
bool custom_cmp(Triangle &a, Triangle &b)
{
    return a.area < b.area;
}
void solve()
{
    int n;
    cin >> n;
    vector<Triangle> arr(n);

    for (auto &t : arr)
    {
        cin >> t.a >> t.b >> t.c;
        t.compute();
    }

    sort(arr.begin(), arr.end(), custom_cmp);

    for (auto &t : arr)
    {
        cout << t.a << " " << t.b << " " << t.c << " = " << t.area << endl;
    }
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
// Coded by Ashraful Islam @ml.ashraful37