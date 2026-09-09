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
    int n, cnt = 0;
    cin >> n;
    vi arr(n);
    for (auto &it : arr)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 or arr[i] == -1)
        {
            arr[i] = 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 1 or arr[i] == -1)
        {
            arr[i] = 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = 0;
        }
    }

    for (auto &it : arr)
        cout << it << " ";
    cout << "\n";
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