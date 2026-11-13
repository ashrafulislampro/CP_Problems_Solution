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
    int k, n;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int init = a[k - 1];

    set<int> s;

    for (auto x : a)
    {
        if (x >= init)
            s.insert(x);
    }

    bool ans = true;
    int prev = init;

    for (auto x : s)
    {
        if (x - prev > init)
            ans = false;
        prev = x;
    }

    if (ans)
        cout << "YES";
    else
        cout << "NO";
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
// https://codeforces.com/problemset/problem/2126/C