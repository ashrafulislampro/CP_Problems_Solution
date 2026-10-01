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
    int n, m, k;
    cin >> n >> m >> k;

    vi q_list(m), quest(k);
    for (auto &it : q_list)
        cin >> it;
    for (auto &it : quest)
        cin >> it;

    vector<bool> used(n + 1);
    for (auto it : quest)
        used[it] = true;

    for (int i = 0; i < m; i++)
    {
        if (n == k or (k == n - 1 and !used[q_list[i]]))
        {
            cout << 1;
        }
        else
            cout << 0;
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