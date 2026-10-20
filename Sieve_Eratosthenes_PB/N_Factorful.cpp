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

int npf[N];
int ans[11][N];
int main()
{
    ASHRAFUL

    for (int i = 2; i < N; i++)
    {
        if (npf[i] == 0)
        {
            for (int j = i; j < N; j += i)
            {
                npf[j]++;
            }
        }
    }

    for (int i = 1; i < N; i++)
        ans[npf[i]][i] = 1;

    for (int i = 0; i <= 10; i++)
    {
        for (int j = 1; j < N; j++)
        {
            ans[i][j] += ans[i][j - 1];
        }
    }

    int T = 1;
    cin >> T;
    while (T--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        cout << ans[n][b] - ans[n][a - 1] << "\n";
    }
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://www.spoj.com/problems/NFACTOR/