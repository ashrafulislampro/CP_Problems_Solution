#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, cnt_1 = 0, cnt_0 = 0;
    cin >> n >> m;
    string str;
    cin>>str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '0')cnt_0++;
        else cnt_1++;
    }

    int mn = min(m, n-m);
    if(cnt_1 >= mn && cnt_0 >= mn){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
int main()
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