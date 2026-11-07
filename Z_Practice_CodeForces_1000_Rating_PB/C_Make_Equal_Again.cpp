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
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;

    vll arr(n);

    for (auto &it : arr)
        cin >> it;

    int frt_cnt = 1, lst_cnt = 1;
    for (int i = 1; i < n;)
    {
        if (arr[i] == arr[i - 1])
        {
            frt_cnt++;
            i++;
        }
        else
            break;
    }
    for (int j = n - 1; j > 0;)
    {
        if (arr[j] == arr[j - 1])
        {
            lst_cnt++;
            j--;
        }
        else
            break;
    }

    if (frt_cnt == lst_cnt and lst_cnt == n)
    {
        cout << 0 << "\n";
    }
    else
    {
        if (arr.back() == arr.front())
        {
            cout << (n - frt_cnt - lst_cnt) << "\n";
        }
        else
        {
            cout << (n - max(frt_cnt, lst_cnt)) << "\n";
        }
    }
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