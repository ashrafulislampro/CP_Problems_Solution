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
    ll n, m;
    cin >> n >> m;

    vll arr(n);
    for (auto &it : arr)
        cin >> it;
    priority_queue<ll> pq;
    ll sum = 0;
    for (ll i = 0; i < m - 1; i++)
    {
        pq.push(arr[i]);
        sum += arr[i];
    }

    ll ans = -inf;

    for (ll i = m - 1; i < n; i++)
    {
        ans = max(ans, (m * arr[i]) - sum);
        if (m > 1 and pq.top() > arr[i])
        {
            sum -= pq.top();
            pq.pop();
            pq.push(arr[i]);
            sum += arr[i];
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

// https://codeforces.com/problemset/problem/2264/B