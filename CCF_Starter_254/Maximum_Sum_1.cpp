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

// O(N^2) approach
void solve()
{
    int n, k;
    cin >> n >> k;
    k = n - k;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    // brute-force approach
    int ans = 0;
    for (int i = k; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i - j];
        }
        ans = max(ans, sum);
    }
    cout << ans << "\n";
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