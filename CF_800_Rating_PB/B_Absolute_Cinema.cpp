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
    vector<ll> A(n), B(n);
    for (auto &it : A)
        cin >> it;
    for (auto &it : B)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        if (A[i] > B[i])
        {
            swap(A[i], B[i]);
        }
    }

    ll val = *max_element(A.begin(), A.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += B[i];
    }
    cout << val + sum << "\n";
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37