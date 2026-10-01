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
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

bool isPrime(ll n)
{
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 2)
        if (n % i == 0)
            return false;

    return true;
}
void solve()
{
    int n;
    cin >> n;

    if (n <= 4)
    {
        cout << -1 << "\n";
        return;
    }

    vi tmp, ans;
    bool flg = true;
    for (int i = 1; i <= n; i += 2)
        ans.pb(i);

    int lst = ans.back();
    for (int i = 2; i <= n; i += 2)
    {
        if (flg && isPrime(lst + i))
            tmp.pb(i);
        else
        {
            ans.pb(i);
            flg = false;
        }
    }
    for (auto it : tmp)
        ans.pb(it);

    for (auto it : ans)
    {
        cout << it << ' ';
    }
    cout << "\n";
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

// https://codeforces.com/problemset/problem/2037/C