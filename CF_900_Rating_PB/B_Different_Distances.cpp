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

void solve()
{
    int n, x;
    cin >> n;

    deque<int> dq;
    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
        dq.push_back(i);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1 && i == n)
        {
            dq.push_back(i);
            dq.push_front(i);

            break;
        }
        if (i % 2 == 0)
        {
            dq.push_back(i - 1);
            dq.push_back(i);
        }
        if (i % 2 == 1)
        {
            dq.push_back(i);
            dq.push_back(i + 1);
        }
    }

    if (n == 2)
    {
        int val = dq.back();
        dq.pop_back();
        dq.push_front(val);
    }
    if (n % 2 == 1)
    {
        int v1 = dq.back();
        dq.pop_back();
        int v2 = dq.back();
        dq.pop_back();
        dq.push_back(v1);
        dq.push_back(v2);
    }
    while (!dq.empty())
    {
        int val = *dq.begin();
        dq.pop_front();
        cout << val << " ";
    }
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