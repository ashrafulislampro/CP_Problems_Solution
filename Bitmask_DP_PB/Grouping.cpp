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
const ll inf = (ll) 1e18;

vector<pll> pt;
ll n;

vector<ll> line_mask;
vector<ll> pt_mask[20];


ll dp[N];

ll cnt;

ll DP(ll mask) {
    if(__builtin_popcount(mask) == n) {
        return 0;
    }

    if(dp[mask] != -1)
        return dp[mask];

    ll ret = inf;
    ll cur_pt;
    for(int i = 0; i < n; i++) {
        if(!(mask & (1 << i))) {
            cur_pt = i;
            break;
        }
    }
    for(ll ii : pt_mask[cur_pt]) {
        ret = min(ret, 1 + DP(mask | ii));
    }

    return dp[mask] = ret;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1, T = 0;
    cin >> t;
    while(t--) {

        memset(dp, -1, sizeof(dp));
        for(int i = 0; i < 20; i++)
            pt_mask[i].clear();
        // memset(line_mask, 0, sizeof(line_mask));
        pt.clear();
        line_mask.clear();

        cout << "Case " << ++T << ": ";

        ll a, b, c, i, j, k, m, o, x, y, z;
        cin >> n;
        for(i = 0; i < n; i++) {
            cin >> a >> b;
            pt.push_back({a, b});
        }

        if(n == 1) {
            cout << 1 << "\n";
            continue;
        }

        cnt = 0;

        for(i = 0; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                cnt += 1;
                ll delx = pt[i].first - pt[j].first;
                ll dely = pt[i].second - pt[j].second;

                ll cur_mask = 0;

                for(k = 0; k < n; k++) {

                    ll nx = pt[i].first - pt[k].first;
                    ll ny = pt[i].second - pt[k].second;

                    if(delx * ny == nx * dely) {
                        cur_mask |= (1 << k);
                    }                    
                }
                line_mask.push_back(cur_mask);
                // cerr << cnt << " " << cur_mask << "\n";
            }
        }

        sort(line_mask.begin(), line_mask.end());
        line_mask.erase(unique(line_mask.begin(), line_mask.end()), line_mask.end());


        for(ll ii : line_mask) {
            for(j = 0; j < n; j++) {
                if(ii & (1 << j)) {
                    pt_mask[j].push_back(ii);
                }
            }
        }

        cout << DP(0) << "\n";


    }
}