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
    ll n, k;
    cin >> n >> k;

    if (n - 2 < k)
    {
        cout << -1 << "\n";
        return;
    }

    int total_remove = (n - 2 - k);
    int zero_remove = total_remove / 2;
    int one_remove = total_remove - zero_remove;
    int total_one = (n + 1) / 2, total_zero = n - total_one;

    int rem_one = total_one - one_remove;
    int rem_zero = total_zero - zero_remove;

    string ans = "", tmp = "";

    for (int i = 0; i < rem_one; i++)
        ans += '1';
    for (int i = 0; i < rem_zero; i++)
        ans += '0';

    int len = zero_remove + one_remove;
    if (zero_remove <= one_remove)
    {
        for (int i = 1; i <= len; i++)
            if (i % 2 == 1)
                tmp += '1';
            else
                tmp += '0';
    }
    else
    {
        for (int i = 1; i <= len; i++)
            if (i % 2 == 1)
                tmp += '0';
            else
                tmp += '1';
    }

    if (tmp.back() != ans.front())
        ans = tmp + ans;
    else if (tmp.front() != ans.back())
        ans = ans + tmp;

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