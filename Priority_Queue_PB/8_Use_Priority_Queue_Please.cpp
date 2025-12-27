#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
void solve()
{
    int n, x;
    cin >> n;
    priority_queue<int> pq;
    while(n--){
        cin>>x;
        pq.push(x);
    }
    while(!pq.empty()){
        int mx = pq.top();
        pq.pop();
        cout<<mx<<" ";
        if(mx / 2 > 0){
            pq.push(mx/2);
        }
    }
    
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}