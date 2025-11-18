#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, mn_idx, mx_idx, l = INT_MAX, h = INT_MIN, x;
    cin >> n;
   
    for(int i = 1; i <= n; i++){
        cin>>x;
        if(x <= l){
            l = x;
            mn_idx = i;
        }
        if(x > h){
            h = x;
            mx_idx = i;
        }
    }

    if(mx_idx > mn_idx){
        cout<<(mx_idx - 2 + n - mn_idx)<<endl;
    }else{
        cout<<(mx_idx - 1 + n - mn_idx)<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}