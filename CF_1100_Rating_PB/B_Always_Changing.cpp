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
    cin >> n;
    string ss;
    cin >> ss;

    int N0 = 0, N1 = 0, C0 = 0, C1 = 0, cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (ss[i] == '0')
            N0++, cnt0++, cnt1 = 0;
        if (ss[i] == '1')
            N1++, cnt1++, cnt0 = 0;

        if (cnt0 >= 2)
            C0++;
        if (cnt1 >= 2)
            C1++;
    }
    int NN = N0 - N1;
    if (abs(NN) > 2)
    {
        cout << -1 << "\n";
    }
    else
    {
        int L = n - (C0 + C1);
        int LL = (N0 - C0) - (N1 - C1);
        cout << (n - L) + max(0, abs(NN - LL) - 1) << "\n";
    }
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
// https://codeforces.com/contest/2252/problem/B