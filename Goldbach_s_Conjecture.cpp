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
const int N = 1e6;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vi prime;
vi IsComp(N);
void solve()
{
    ll a, b, c, i, j, k, m, n, o, x, y, z;
    cin >> n;
}
int main()
{
    ASHRAFUL

    for (int i = 4; i < N; i += 2)
        IsComp[i] = 1;

    for (int i = 3; i * i < N; i += 2)
    {
        if (IsComp[i] == 0)
            for (int j = i * i; j < N; j += 2 * i)
                IsComp[j] = 1;
    }

    prime.pb(2);
    for (int i = 3; i < N; i += 2)
    {
        if (!IsComp[i])
            prime.pb(i);
    }

    int n;
    while (cin >> n)
    {
        if(n == 0)break;

        int p = 0, q = -1;
        for(auto &it: prime){
            if(it > n/2)break;

            if(!IsComp[n-it]){
               int new_p = it, new_q = n - it;
                if(new_q - new_p > q-p){
                    p = new_p;
                    q = new_q;
                }
            }
        }

        if(q == -1){
            cout<<"Goldbach's conjecture is wrong.\n";
        }else{
            cout<<n<<" = "<<p<<" + "<<q<<"\n";
        }
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37

// https://vjudge.net/problem/UVA-543