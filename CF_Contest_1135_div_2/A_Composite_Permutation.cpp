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
    if (n <= 3)
    {
        cout << -1;
        return;
    }
    vi aa, bb;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            aa.pb(i);
        else
            bb.pb(i);
    }
    sort(aa.rbegin(), aa.rend());

    sort(bb.rbegin(), bb.rend());

    vi ans(n + 1);
    ans[3] = 1;
    for (int i = 0, j = 0; i < (int)aa.sz(); i++)
    {
        ans[j] = aa[i];
        j += 2;
    }

    for (int i = 0, j = 1; i < (int)bb.sz(); i++)
    {

        ans[j] = bb[i];
        j += 2;
        if (j == 3)
            j += 2;
    }

    for (auto it : ans)
    {
        if (it != 0)
            cout << it << ' ';
    }
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

// https://codeforces.com/contest/2285/problem/A