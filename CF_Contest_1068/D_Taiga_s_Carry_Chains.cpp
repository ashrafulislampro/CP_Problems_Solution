#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
const int MOD = 1000000007;
#define sz(x) (ll)(x).size()
auto rd = []() { ll x; cin >> x; return x; };
#define dbg(x) cerr << "[" #x "]  " << (x) << "\n"
// #define errv(x) {cerr << "["#x"]  ["; for (const auto& ___ : (x)) cerr << ___ << ", "; cerr << "]\n";}
// #define cerr if(0)cerr
#define xx first
#define yy second
mt19937 rnd(std::chrono::high_resolution_clock::now().time_since_epoch().count());
 
void Solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a;
    vector<ll> s;
    for (int i = 31; i >= 0; i--) {
        s.push_back(((n >> i) & 1));
        if (a.empty() || a.back().xx != ((n >> i) & 1))
            a.push_back({ ((n >> i) & 1), 1 });
        else
            a.back().yy++;
    }
    if (a[0].xx == 0)
        a.erase(a.begin());
    if (a.back().xx == 0)
        a.pop_back();
    ll zeroSum = 0, oneSum = 0;
    for (int i = 0; i < sz(a); i++) {
        if (i & 1) {
            zeroSum += a[i].yy;
        } else {
            oneSum += a[i].yy;
        }
    }
    if (k >= zeroSum + 1) {
        cout << k - 1 + oneSum << '\n';
        return;
    }
    ll smash[32][32] {}, dp[33][33] {};
    for (int i = 0; i <= 31; i++) {
        for (int j = i; j <= 31; j++) {
            ll zerCount = 0;
            for (int k = i; k <= j; k++) {
                zerCount += !s[k];
            }
            smash[i][j] = zerCount + 1;
        }
    }
    for (int i = 31; i >= 0; i--) {
        for (int K = 1; K <= k; K++) {
            dp[i][K] = max(dp[i][K - 1], dp[i + 1][K]);
            for (int j = i; j <= 31; j++) {
                if (smash[i][j] <= K)
                    dp[i][K] = max(dp[i][K], (j - i + 1) + dp[j + 1][K - smash[i][j]]);
            }
        }
    }
    ll ans = 0;
    for (auto& it : dp)
        for (auto& it2 : it)
            ans = max(ans, it2);
    cout << ans << '\n';
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": "; // cout << "Case " << i << ": ";
        Solve();
    }
    return 0;
}