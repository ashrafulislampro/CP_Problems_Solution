#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr;
    if (b < c)
    {

        for (int i = b; i <= c; i++)
        {
            arr.pb(i);
        }
        auto it = find(arr.begin(), arr.end(), a);
        if (it == arr.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        for (int i = b; i <= 24; i++)
        {
            arr.pb(i);
        }
        for (int i = 0; i <= c; i++)
        {
            arr.pb(i);
        }
        auto it = find(arr.begin(), arr.end(), a);
        if (it == arr.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37