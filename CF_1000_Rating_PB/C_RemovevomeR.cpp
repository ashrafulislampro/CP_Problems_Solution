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
    int n, z_cnt = 0, o_cnt = 0;
    cin >> n;

    string ss;
    cin >> ss;

    for (int i = 0; i < n; i++)
        if (ss[i] == '1')
            o_cnt++;
        else
            z_cnt++;

    if (z_cnt == 0 || o_cnt == 0)
    {
        cout << 1 << "\n";
        return;
    }
    size_t it1 = ss.find("01");
    size_t it2 = ss.find("10");
    // cout << it1 << " " << it2 << endl;

    if (it1 != string::npos and it2 != string::npos)
        cout << 1 << "\n";
    else
        cout << 2 << "\n";
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