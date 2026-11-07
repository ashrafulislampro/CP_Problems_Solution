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
    int n, q, l, r;
    cin >> n >> q;

    vll A(n + 1), B(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> A[i];
    for (int i = 1; i <= n; i++)
        cin >> B[i];

    ll mx_ele = -inf;
    for (int i = n; i > 0; i--)
    {
        mx_ele = max({mx_ele, A[i], B[i]});
        if (mx_ele >= A[i])
            A[i] = mx_ele;
    }

    for (int i = 1; i <= n; i++)
        A[i] += A[i - 1];

    while (q--)
    {
        cin >> l >> r;
        l--;
        cout << (A[r] - A[l]) << " ";
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

// https://codeforces.com/problemset/problem/2193/C