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
    int N;
    string S;
    cin >> N >> S;
    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] != '/')
            continue;
        int d = 0;
        while (true)
        {
            int j = i - (d + 1);
            int k = i + (d + 1);
            if (!(0 <= j and j < N))
                break;
            if (!(0 <= k and k < N))
                break;
            if (S[j] != '1')
                break;
            if (S[k] != '2')
                break;
            d++;
        }
        ans = max(ans, 1 + d * 2);
    }
    cout << ans << "\n";
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37