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


/// memory save kre n/32 
int n = 20;
vector<unsigned int> isComposite((n/32) + 1);

bool get(int x)
{
    int idx = x / 32;
    int p = x % 32;
    if (isComposite[idx] & (1 << p))
        return true;
    else
        return false;
}

void set_n(int x, bool ne_w)
{
    int idx = x / 32;
    int p = x % 32;
    if (get(x) != ne_w)
    {
        isComposite[idx] ^= 1 << p;
    }
}
void solve()
{

    for (int i = 4; i <= n; i += 2)
        set_n(i, 1);

    for (int i = 3; i * i <= n; i += 2)
    {
        if (get(i) == 0)
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                set_n(j, 1);
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (get(i) == 0)
            cout << i << " ";
    }
}
int main()
{
    ASHRAFUL
    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37