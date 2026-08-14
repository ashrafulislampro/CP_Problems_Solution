#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
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

bool isABC(const string &s, int i)
{
    if (i < 0 || i + 2 >= (int)s.size())
        return false;

    return s[i] == 'A' &&
           s[i + 1] == 'B' &&
           s[i + 2] == 'C';
}

void solve()
{
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    int ans = 0;

    for (int i = 0; i + 2 < N; i++)
    {
        if (isABC(S, i))
            ans++;
    }

    while (Q--)
    {
        int X;
        char C;
        cin >> X >> C;

        X--;

        for (int i = X - 2; i <= X; i++)
        {
            if (isABC(S, i))
                ans--;
        }

        S[X] = C;

        for (int i = X - 2; i <= X; i++)
        {
            if (isABC(S, i))
                ans++;
        }

        cout << ans << '\n';
    }
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37