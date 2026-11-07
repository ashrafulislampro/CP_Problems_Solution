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
bool op[2];
void solve()
{
    ll n, k, x,sum = 0;
    cin >> n >> k;
    priority_queue<ll> pq[2];
    op[0]=op[1]= 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        pq[i & 1].push(x);
        sum += x;
    }
    for(int i = 1; i <= k; i++){
        cin>>x;
        if((!pq[x&1].empty() and pq[x&1].top() >= 0) || !op[x&1]){
            sum -= pq[x&1].top();
            pq[x&1].pop();
            op[x&1] = 1;
        }
    }

    cout << sum << "\n";
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

// https://codeforces.com/problemset/problem/2222/B