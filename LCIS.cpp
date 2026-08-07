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
const ll inf = (ll)1e9;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

vector<int> arr_1, arr_2;
int dp[505][505];
pair<int, int> next_step[505][505];

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

int LCIS(int i , int j){
    if(i == arr_1.sz() || j == arr_2.sz()){
        return 0;
    }

    if(dp[i][j] != -1)return dp[i][j];

    
}
void solve()
{
    int n, m;
    cin >> n;
    arr_1.resize(n + 1, 0);
    for (auto &it : arr_1)
        cin >> it;
    cin >> m;
    arr_2.resize(m + 1, 0);
    for (auto &it : arr_2)
        cin >> it;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<LCIS(0, 0)<<"\n";
    

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