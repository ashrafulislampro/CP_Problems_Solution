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
    int n, k, p, m, x;
    cin >> n >> k >> p >> m;

    deque<pii> dq;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        dq.push_back({x, i});
    }
    pii val = dq[--p];
    int ans = 0;
    while (m > 0)
    {
        auto it = find(dq.begin(), dq.begin() + k, val);

        if (it != dq.begin() + k and m >= val.ft)
        {
            pii selected_val = *it;
            m -= selected_val.ft;
            ans++;
            dq.erase(it);
            dq.push_back(selected_val);
        }
        else
        {
            auto it = min_element(dq.begin(), dq.begin() + k);
            pii selected_val = *it;
            m -= selected_val.ft;
            dq.erase(it);
            dq.push_back(selected_val);
        }
    }
    cout << ans << "\n";
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

// https://codeforces.com/problemset/problem/2208/B