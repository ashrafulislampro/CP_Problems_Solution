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
    ll a_odd = 0, a_even = 0, b_odd = 0, b_even = 0, n, k;
    cin >> n >> k;

    vi A(n), B(n);
    input(A);
    input(B);

    for (int i = 0; i < n; i++)
        if (A[i] % 2 == 0)
            a_even++;
        else
            a_odd++;
    for (int i = 0; i < n; i++)
        if (B[i] % 2 == 0)
            b_even++;
        else
            b_odd++;

    if (a_odd == b_odd and a_even == b_even)
    {
        cout << "YES";
        return;
    }
    ll mx_odd = max(a_odd, b_odd);
    ll mx_even = max(a_even, b_even);
    // cerr << a_odd << " " << a_even << ", " << b_odd << " " << b_even << endl;

    if (mx_odd == a_odd)
        a_odd = a_odd - b_odd, b_odd = 0;
    else
        b_odd = b_odd - a_odd, a_odd = 0;

    if (mx_even == a_even)
        a_even = a_even - b_even, b_even = 0;
    else
        b_even = b_even - a_even, a_even = 0;

    if (b_odd == 0)
    {
        if (k % 2 == 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    else
    {
        if (k % 2 == 1)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
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