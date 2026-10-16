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
    vi arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());

    int mx_ele = arr[n - 1];
    int mn_ele = arr[0];
  
    arr[n - 1] = mn_ele;
    int ans = abs(mn_ele - arr[n - 2]);
    arr[n - 1] = mx_ele;
    arr[0] = mx_ele;
    ans = min({ans, abs(arr[1] - arr[n - 1])});

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