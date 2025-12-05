#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q, x;
    cin >> n >> q;
    multiset<int> mst;
    for(int i = 0; i < n; i++){
        cin>>x;
        mst.insert(x);
    }
    while(q--){
        int type;
        cin>>type;
        if(type == 0){
            cin>>x;
            mst.insert(x);
        }else if(type == 1){
            auto it = mst.begin();
            cout<<*it<<endl;
            mst.erase(it);
        }else{
            auto it = mst.rbegin();
            cout<<*it<<endl;
            mst.erase(next(it).base());
        }
    }
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

        solve();
    return 0;
}