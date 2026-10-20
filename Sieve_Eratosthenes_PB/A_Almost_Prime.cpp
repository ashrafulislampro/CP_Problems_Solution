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
const int N = 1e4;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

int npf[N];
int ans[N];
int main()
{
    ASHRAFUL

    for (int i = 2; i < N; i++)
    {
        if (npf[i] == 0)
        {
            for (int j = i; j < N; j += i)
                npf[j]++;
        }
    }

    for (int i = 1; i < N; i++)
    {
        if (npf[i] == 2)
            ans[i] = 1;
    }

    for (int i = 1; i < N; i++)
    {
        ans[i] += ans[i - 1];
    }
    int n;
    cin >> n;
    cout << ans[n] << "\n";

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://codeforces.com/contest/26/problem/A