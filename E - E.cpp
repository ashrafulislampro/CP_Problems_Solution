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

void solve()
{
    int n, x;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pq.push(x);
    }
    int cnt = 0;
    while (!pq.empty())
    {
        int val1 = pq.top();
        pq.pop();
        int val2 = pq.top();
        pq.pop();

        if (val1 > 0 and val2 > 0)
        {
            cnt++;
            pq.push(--val1);
            pq.push(--val2);
        }
        else
            break;
    }
    cout << cnt << "\n";
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37