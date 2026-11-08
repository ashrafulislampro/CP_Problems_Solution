#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)2e5 + 10;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

bool isComp[N];
vi isPrime;
int nxt[N];
void sieves()
{
    // sieves 
    for (int i = 4; i < N; i += 2)
        isComp[i] = 1;
    for (int i = 3; i * i < N; i+=2)
    {
        if (isComp[i] == 0)
        {
            for (int j = i * i; j < N; j += 2 * i)
                isComp[j] = 1;
        }
    }

    // sieves
    // memset(isComp, 1, sizeof(isComp));
    // for (int i = 2; i < N; i++)
    // {
    //     if (!isComp[i])
    //         continue;
    //     for (int j = 2; j * i < N; j++)
    //         isComp[j * i] = 0;
    // }

   
   
    int now = 2;
    for (int i = 2; i < N; i++)
    {
        if (now < i)
        {
            now++;
            while (isComp[now] == 1)
                now++;
        }
        nxt[i] = now;
    }
}
void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    input(arr);
    for (int i = 0; i < n; i++)
    {
        cout << nxt[arr[i]] << ' ';
    }
}
int main()
{
    ASHRAFUL
    sieves();

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve(), cout << "\n";
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37
// https://codeforces.com/contest/2284/problem/C1