#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    deque<pair<int, int>> body;
    for(int i = 1; i <= n; i++){
        body.push_back({i, 0});
    }
    while(q--){
        int tt, idx;
        char ch;
        cin>>tt;
        if(tt == 1){
            int dx = 0, dy = 0;
            cin>>ch;
            if(ch == 'R')dx = 1;
            else if(ch == 'L') dx = -1;
            else if(ch == 'U') dy = 1;
            else dy = -1;
            int x = body[0].first + dx;
            int y = body[0].second + dy;
            body.push_front({x, y});
            body.pop_back();
        }else{
            cin>>idx;
            idx--;
            cout<<body[idx].first<<" "<<body[idx].second<<endl;
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