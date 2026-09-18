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
    int n = 20;

    vector<int> spf(n + 1);

    for (int i = 2; i <= n; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (spf[i] == 0)
        {
            spf[i] = i;
            for (int j = i * i; j <= n; j += 2 * i)
            {
                if (spf[j] == 0)
                    spf[j] = i;
            }
        }
    }

    // int x = 28;
    // while (x != 1)
    // {
    //     cout << spf[x] << " ";
    //     x /= spf[x];
    // }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == 0)
            cout << "x = " << i << " : " << i << endl;
        else
            cout << "x = " << i << " : " << spf[i] << endl;
    }
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37