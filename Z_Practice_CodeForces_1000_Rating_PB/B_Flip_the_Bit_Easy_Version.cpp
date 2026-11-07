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

int flip(int val) { return (1 - val); }

void solve()
{
    int n, k;
    cin >> n >> k;

    vi arr(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int pivot;
    cin >> pivot;
    arr[0] = arr[n + 1] = arr[pivot];

    int cnt_l = 0, cnt_r = 0;
    for (int i = 0; i < pivot; i++)
        if (arr[i] != arr[i + 1])
            cnt_l++;

    for (int i = pivot; i <= n; i++)
        if (arr[i] != arr[i + 1])
            cnt_r++;

    cout << max(cnt_l, cnt_r) << "\n";
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