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
    char ch;
    vector<char> arr;
    for (int i = 0; i < 6; i++)
    {
        cin >> ch;
        arr.pb(ch);
    }

    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == 'W' and cnt == 0)
        {
            cnt++;
        }
        else if (arr[i] == 'W' and i > 0 and arr[i - 1] == 'W')
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if (cnt >= 3)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
// Coded by Ashraful Islam @ml.ashraful37