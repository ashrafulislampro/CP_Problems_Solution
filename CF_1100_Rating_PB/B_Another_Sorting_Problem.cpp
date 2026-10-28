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

    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << "YES\n";
        return;
    }
    auto it = max_element(arr.begin(), arr.end());
    int mx = *it;
    int idx = it - arr.begin();

    int k = 0;

    for (int i = 1; i < n; i++)
    {
        k = max(k, arr[i-1] - arr[i]);
    }

    for (int i = 1; i < n; i++)
    {        
        if (arr[i - 1] > arr[i])
            arr[i] += k;
    }

    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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

// https://codeforces.com/problemset/problem/2231/B