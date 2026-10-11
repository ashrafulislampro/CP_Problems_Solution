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
    string ss;
    cin >> ss;

    ll ans = 0;
    int n = ss.size();
    int l = 0, r = 0;

    while (l < n && r < n)
    {
        while (l < n && ss[l] == '0')
            l++;

        if (l >= n)
            break;

        r = max(r, l + 1);

        while (r < n && ss[r] == '1')
            r++;

        if (r >= n)
            break;

        if (ss[l] == '1' && ss[r] == '0')
        {
            ans += (ll)(r - l + 1);

            ss[l] = '0';
            ss[r] = '1';
            l++;
            r++;
        }
    }

    cout << ans << '\n';
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

// https://codeforces.com/problemset/problem/1969/B