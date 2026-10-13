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
    cin >> n >> m >> k;

    vll A(n), B(m);
    set<ll> st, A_st, B_st;
    for (auto &it : A)
        cin >> it;
    for (auto &it : B)
        cin >> it;

    for (i = 0; i < n; i++)
    {
        if (A[i] <= k)
            A_st.insert(A[i]);
    }
    for (i = 0; i < m; i++)
    {
        if (B[i] <= k)
            B_st.insert(B[i]);
    }

    if (A_st.sz() < k / 2 || B_st.sz() < k / 2)
    {
        cout << "NO\n";
    }
    else
    {
        while (A_st.sz())
        {
            auto it = A_st.begin();
            st.insert(*it);
            A_st.erase(it);
        }
        while (B_st.sz())
        {
            auto it = B_st.begin();
            st.insert(*it);
            B_st.erase(it);
        }

        x = 1;
        while (st.sz())
        {
            auto it = st.begin();
            if (x != *it)
            {
                cout << "NO\n";
                return;
            }
            st.erase(it);
            x++;
        }
        if (x <= k)
            cout << "NO" << "\n";
        else
            cout << "YES\n";
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

// https://codeforces.com/problemset/problem/1927/C