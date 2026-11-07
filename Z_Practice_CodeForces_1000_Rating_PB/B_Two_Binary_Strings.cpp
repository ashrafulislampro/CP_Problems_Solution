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
    int n;
    string a, b;
    cin >> a >> b;
    n = a.sz();

    bool flg = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == b[i] and b[i] == '0' and b[i + 1] == '1' and a[i + 1] == '1')
        {
            flg = true;
            break;
        }
    }

    if (flg)
        cout << "YES\n";
    else
        cout << "NO\n";
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

// https://codeforces.com/problemset/problem/1861/B