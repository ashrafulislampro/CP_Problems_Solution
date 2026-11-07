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
    vi A(n), B(n);
    for (auto &it : A)
        cin >> it;

    int bad = -1, margin = 1e9, need = 0;
    bool reject = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
        if (A[i] < B[i])
        {
            if (bad != -1)
                reject = 1;
            bad = i;
            need = B[i] - A[i];
        }
        else
            margin = min(margin, A[i] - B[i]);
    }

    if (reject)
        cout << "NO\n";
    else
        cout << ((margin >= need) ? "YES\n" : "NO\n");
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