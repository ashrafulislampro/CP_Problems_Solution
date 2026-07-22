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
template <typename T>
using vec = vector<T>;

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n), ans;
    for (auto &it : arr)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        int len = sqrt(arr[i]);
        set<int> st;
        for (int j = 1; j <= len; j++)
        {
            if (arr[i] % j == 0)
            {
                st.insert(j);
                st.insert(arr[i] / j);
            }
        }
        // if (st.sz() > 0)
        ans.pb(st.sz());
    }
    for (auto &it : ans)
    {
        cout << it << "\n";
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://cses.fi/problemset/task/1713/