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

int digit_sum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        num /= 10;
        sum += rem * rem;
    }
    return sum;
}

ll ncr_formula(int num)
{
    ll divisor = num - 2;
    ll sum = num;
    for (ll i = num - 1; i > divisor; i--)
    {
        sum *= i;
    }
    return sum / 2;
}
void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    for (auto &it : arr)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        map<int, int> frq;
        int val = arr[i];
        while (true)
        {
            val = digit_sum(val);
            if (val == 1 or (val != 1 and frq[val]))
            {
                arr[i] = val;
                break;
            }
            frq[val]++;
        }
    }

    map<int, int> frq;
    for (auto &it : arr)
        frq[it]++;

    for (auto &it : arr)
        cerr << it << ' ';

    ll ans = 0;
    for (auto [key, val] : frq)
    {
        if (val > 1)
        {
            ans += ncr_formula(val);
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

// https://codeforces.com/problemset/problem/2269/B