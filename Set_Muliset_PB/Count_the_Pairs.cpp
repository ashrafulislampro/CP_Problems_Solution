#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, x;
    cin >> n >> k;
    set<int> st;
    for(int i = 0; i < n; i++){
        cin>>x;
        st.insert(x);
    }
    int ans = 0;
    for(auto val: st){
        if(st.count(val-k)){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}