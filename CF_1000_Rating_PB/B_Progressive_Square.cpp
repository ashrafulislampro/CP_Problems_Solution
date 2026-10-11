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
    ll n, c, d;
    cin >> n >> c >> d;

    vll arr(n * n);
    for (auto &it : arr)
        cin >> it;

    sort(arr.begin(), arr.end());

    ll grid[n][n];
    grid[0][0] = arr[0];

    for(int i = 0; i < n;){

        for(int j = 1; j < n; j++){
            grid[i][j] = grid[i][j-1] + d;            
        }
        if(++i >= n)break;
        grid[i][0] = grid[i-1][0] + c;
    }

    vll A;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            A.pb(grid[i][j]);         
        }       
    }
    sort(A.begin() , A.end());

    if(A == arr)cout<<"YES\n";
    else cout<<"NO\n";
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