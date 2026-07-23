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
template <typename T>
using vec = vector<T>;

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const ll two_mod_inv = 500000004;
#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);


/* 
        1 to n summation formula is

        n ( n + 1 ) / 2   
        
        similar to 
        
        int count = end-start + 1;

        count * ( start + end ) / 2 

        এই লাইনের মূল উদ্দেশ্য হলো ২ দিয়ে ভাগ করা, কিন্তু modulo arithmetic-এ সরাসরি /2 করা যায় না। তাই TWO_MOD_INV দিয়ে গুণ করা হয়।
*/
ll rangeSum(ll start, ll end)
{
    return (((((end - start + 1) % mod) * ((start + end) % mod)) % mod) * two_mod_inv) % mod;
}
ll sumOfDivisors(ll n)
{
    ll ans = 0, l = 1;
    while (l <= n)
    {
        // For the current index l
        ll k = n / l;
        // The last index having the same value of (n/i)
        ll r = n / k;

        // contribution
        ans = (ans + k * rangeSum(l, r)) % mod;

        l = r + 1;
    }

    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    cout << sumOfDivisors(n) << "\n";
}
int main()
{
    ASHRAFUL
    solve();
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37


// doc : https://usaco.guide/problems/cses-1082-sum-of-divisors/solution

// https://cses.fi/problemset/task/1082/