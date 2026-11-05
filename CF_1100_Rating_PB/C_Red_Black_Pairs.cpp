#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    ll n;
    cin >> n;

    string A, B;
    cin >> A >> B;

    vll dp(n + 5, inf);
    dp[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        dp[i + 1] = min(dp[i+1], dp[i] + (A[i] != B[i]));
        if (i + 1 < n)
            dp[i + 2] = min(dp[i + 2], dp[i] + (A[i] != A[i + 1]) + (B[i] != B[i + 1]));
    }
    cout << dp[n] << "\n";
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
// https://codeforces.com/problemset/problem/2225/C