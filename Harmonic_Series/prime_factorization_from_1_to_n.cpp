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
    int n = 20;

    vector<vector<int>> prime_divisors(n + 1);

    for (int i = 2; i <= n; i++)
    {
        if (prime_divisors[i].empty())
        {
            for (int j = i; j <= n; j += i)
                prime_divisors[j].pb(i);
        }
    }

    for (int i = 2; i <= n; i++)
    {
        cout << "Prime Fact of " << i << " : ";
        int num = i;
        for (auto it : prime_divisors[i])
        {
            while (num % it == 0)
            {
                cout << it << " ";
                num /= it;
            }
        }
        cout << "\n";
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37