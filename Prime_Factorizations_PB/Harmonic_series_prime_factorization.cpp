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
const int N = 1e6 + 1;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
int spf[N]; // smallest prime factor

int main()
{
    ASHRAFUL

    for (int i = 2; i < N; i += 2)
    {
        spf[i] = 2;
    }
    for (int i = 3; i < N; i += 2)
    {
        if (!spf[i])
        {
            spf[i] = i;
            for (ll j = 1ll * i * i; j < N; j += 2 * i)
            {
                if (!spf[j])
                {
                    spf[j] = i;
                }
            }
        }
    }

    int n = 1000000;

    while (n > 1)
    {
        cout << spf[n] << ' ';
        n /= spf[n];
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37