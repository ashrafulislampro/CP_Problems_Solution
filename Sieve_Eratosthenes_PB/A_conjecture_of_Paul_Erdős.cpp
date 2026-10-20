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
const int N = 1e7;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

int prime[N];
int pre_sum[N];

int main()
{
    ASHRAFUL

    for (int i = 4; i < N; i += 2)
        prime[i] = 1;

    for (int i = 3; i * i < N; i += 2)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < N; j += 2 * i)
                prime[j] = 1;
        }
    }

    for (int x = 1; x * x < N; x++)
    {
        for (int y = 1; y * y * y * y < N; y++)
        {
            int sum = x * x + y * y * y * y;
            if (sum >= N)
                break;
            if (!prime[sum])
                pre_sum[sum] = 1;
        }
    }

    for (int i = 1; i < N; i++)
        pre_sum[i] += pre_sum[i - 1];

    int T = 1, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << pre_sum[n] << "\n";
    }
    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://www.spoj.com/problems/HS08PAUL/