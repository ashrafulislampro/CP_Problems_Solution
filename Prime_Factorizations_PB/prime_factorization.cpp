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
const int N = 1e5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

int isComp[N];

void solve()
{

    for (int i = 4; i <= N; i += 2)
    {
        isComp[i] = 1;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if (isComp[i] == 0)
        {
            for (int j = i * i; j <= N; j += 2 * i)
                isComp[j] = 1;
        }
    }



    vi prime;
    prime.pb(2);
    for (int i = 3; i <= N; i += 2)
        if (isComp[i] == 0)
            prime.pb(i);


            
    int n = 1000000000;
    for (auto &i : prime)
    {
        if (i * i > n)
            break;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cout << i << ' ';
                n /= i;
            }
        }
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37