#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db long double
#define vii vector<ll>
#define pll pair<ll, ll>
#define F first
#define S second


const ll N = (ll) 3e5 + 5;
const ll mod = (ll) 1e9 + 7;
const ll inf = (ll) 1e9;

int dp[N], ar[N], ind[N], pre_ind[N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--) {
        ll a, b, c, i, j, k, m, n, o, x, y, z;
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> ar[i];
        }

        // initialize DP array

        dp[0] = -inf;
        for(int i = 1; i <= n; i++) {
            dp[i] = inf;
        }

        // DP with Binary Search Process

        for(int i = 1; i <= n; i++) {

            int dp_i = upper_bound(dp + 1, dp + n + 1, ar[i]) - dp;

            if(dp[dp_i - 1] < ar[i] && dp[dp_i] > ar[i]) {
                dp[dp_i] = ar[i];
                ind[dp_i] = i;

                pre_ind[i] = ind[dp_i - 1];
            }
        }


        int ans = 0, lst = 0;
        for(int i = 1; i <= n; i++) {
            if(dp[i] != inf) {
                ans = i;
                lst = ind[i];
            }
        }

        vector<int> path;

        while(lst != 0) {
            path.push_back( ar[lst] );
            lst = pre_ind[lst];
        }
        reverse(path.begin(), path.end());

        cout << ans << "\n";
        for(i = 0; i < path.size(); i++) {
            cout << path[i] << " \n"[i + 1 == path.size()];
        }
    }
}