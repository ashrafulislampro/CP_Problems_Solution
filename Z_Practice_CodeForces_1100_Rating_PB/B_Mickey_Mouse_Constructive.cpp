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

vi sieves(2e5 + 5, 0);
void findSieves()
{
    for (int i = 1; i <= 2e5; i++)
    {
        for (int j = i + i; j <= 2e5; j += i)
            sieves[j]++;
    }
}
void solve()
{
    int x, y;
    cin >> x >> y;
    int mn = min(x, y);
    int rem = max(x, y) - mn;
    int ans = 1;
    ans += sieves[rem];
    cout << ans << "\n";
    for (int i = 1; i <= x; i++)
        cout << 1 << ' ';
    for (int i = 1; i <= y; i++)
        cout << -1 << ' ';
    cout << "\n";
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    findSieves();
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/problemset/problem/2211/B