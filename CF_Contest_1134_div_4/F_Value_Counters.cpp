#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
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
    int a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
    vi bb(n), p(n, -1);
    input(bb);

    for (int x = 1; x < n + 1; x++)
    {
        int i = n + bb[x - 1] - (x - 1);
        if (1 <= i and i <= n)
            p[i - 1] = x;
    }
    for (auto it : p)
    {
        if (it == -1)
        {
            cout << -1;
            return;
        }
    }
    for (auto it : p)
        cout << it << ' ';
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve(), cout << "\n";
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/contest/2290/problem/F