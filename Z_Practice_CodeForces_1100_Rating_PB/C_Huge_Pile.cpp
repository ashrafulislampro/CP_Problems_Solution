#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
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
    int n, k;
    cin >> n >> k;
    set<pii> st;
    vector<pii> arr;
    int tmp = n, cnt = 0;
    while (tmp > 1)
    {
        tmp /= 2;
        st.insert({tmp, ++cnt});
    }
    tmp = n, cnt = 0;
    while (tmp > 1)
    {
        tmp = ceil(tmp * 1.0 / 2);
        st.insert({tmp, ++cnt});
    }

    for (auto it : st)
    {
        if (arr.sz() == 0)
        {
            arr.pb(it);
            continue;
        }
        if (arr.back().ft != it.ft)
            arr.pb(it);
    }
    arr.push_back({n, 0});
    int ans = -1, l = 0, r = arr.sz();

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mid < 0 or mid >= (int)arr.sz())
            break;

        if (arr[mid].ft == k)
        {
            ans = arr[mid].sd;
            break;
        }
        else if (arr[mid].ft < k)
            l = mid + 1;
        else
            r = mid - 1;
    }

    if (ans != -1)
        cout << ans;
    else
        cout << -1;
}

int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve(), cout << "\n";
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/problemset/problem/2184/C