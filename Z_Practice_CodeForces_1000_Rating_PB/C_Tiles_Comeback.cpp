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
    int n, k;
    cin >> n >> k;

    vi arr(n);
    for (auto &it : arr)
        cin >> it;

    int index = 0, cnt = 0, lst_el = arr[0], ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == lst_el)
            cnt++, index = i;

        if (cnt % k == 0)
        {
            ans++;
            break;
        }
    }

    cnt = 0, lst_el = arr[n - 1];
    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] == lst_el)
            cnt++;

        if (cnt % k == 0)
        {
            ans++;
            break;
        }
    }

    if (ans == 2 || (arr[0] == arr[n-1] and ans == 1))
        cout << "YES\n";
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
// https://codeforces.com/problemset/problem/1851/C