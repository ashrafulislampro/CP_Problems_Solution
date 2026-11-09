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
    int n;
    cin >> n;

    vi arr(n);
    input(arr);

    int mx = 1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0, dif = 1;
        while (dif + i <= n)
        {
            cnt = 0;
            for (int j = i; j < n; j += dif)
            {
                if (arr[i] == arr[j])
                    cnt++;
                else
                    break;
            }
            mx = max(mx, cnt);
            dif++;
        }
    }
    cout << mx;
}
int main()
{
    ASHRAFUL

    solve(), cout << "\n";

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37