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
    int n, res, x;
    cin >> n;
    cout << "? 1 " << n << endl;
    cin >> res;
    if (res == 0 || res == n)
    {
        cout << "! NO"<<endl;
        return;
    }
    cout << "? 1 " << res << endl;
    cin >> x;
    if (x == res)
        cout << "! NO"<<endl;
    else
        cout << "! YES"<<endl;
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/contest/2280/problem/B