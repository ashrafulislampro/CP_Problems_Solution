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
    ll n, c;
    cin >> n >> c;
    bool flg = false;
    vector<int> A(n), B(n);
    for (auto &it : A)
        cin >> it;
    for (auto &it : B)
        cin >> it;

    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= B[i])
        {
            cost += A[i] - B[i];
        }
        else
        {
            flg = true;
            break;
        }
    }

    if (flg)
    {
        sort(A.begin(), A.end()), sort(B.begin(), B.end());
        cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[i] >= B[i])
            {
                cost += A[i] - B[i];
            }
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
        cout << c + cost << "\n";
    }
    else
    {
        cout << cost << "\n";
    }
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