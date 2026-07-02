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
#define pll pair<ll, ll>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

bool is_palindrom(deque<char> &dq)
{
    int len = dq.sz();
    for (int i = 0; i < len; i++)
    {
        int j = len - 1 - i;
        if (i > j)
            break;
        if (dq[i] != dq[j])
        {
            return false;
        }
    }
    return true;
};

void solve()
{
    int n;
    string ss;
    cin >> n >> ss;

    deque<char> q;

    for (int i = 0; i < n; i++)
    {
        q.push_back(ss[i]);
    }

    deque<char> dq1;
    for (int i = 0; i < q.sz(); i++)
    {
        dq1.push_back(q[i]);

        if (dq1.sz() >= 2)
        {
            if (is_palindrom(dq1))
            {
                dq1.pop_front();
                q.pop_front();
            }
        }
    }

    if (q.sz() >= 2)
    {
        deque<char> dq2;
        for (int i = q.sz() - 1; i >= 0; i--)
        {
            dq2.push_front(q[i]);

            if (dq2.sz() >= 2)
            {
                if (is_palindrom(dq2))
                {
                    dq2.pop_back();
                    q.pop_back();
                }
            }
        }
    }
    cout << q.sz() << "\n";
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37