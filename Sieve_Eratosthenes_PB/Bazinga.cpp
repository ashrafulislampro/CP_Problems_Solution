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
const int N = 1e7;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

int isComp[N];

int main()
{
    ASHRAFUL

    for (int i = 4; i < N; i += 2)
        isComp[i] = 1;

    for (int i = 3; i * i < N; i += 2)
    {
        if (isComp[i] == 0)
        {
            for (int j = i * i; j < N; j += 2 * i)
                isComp[j] = 1;
        }
    }

    vector<int> prime;
    prime.pb(2);
    for (int i = 3; i < N; i += 2)
        if (!isComp[i])
            prime.pb(i);

    vector<int> ans;
    for (int i = 0; i < (int)prime.sz(); i++)
        for (int j = i + 1; j < (int)prime.sz(); j++)
        {
            ll val = (ll)prime[i] * (ll)prime[j];
            if (val >= N)
                break;
            ans.pb(val);
        }

    sort(ans.begin(), ans.end());

    int T = 1;
    cin >> T;
    while (T--)
    {
        int k;
        cin >> k;
        cout << ans[k - 1] << "\n";
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://www.spoj.com/problems/DCEPC505/