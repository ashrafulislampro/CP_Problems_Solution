#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n >= 1 && n <= 10){
        cout<<"Lower Double"<<endl;
    }else if(n >= 11 && n <= 15){
        cout<<"Lower Single"<<endl;
    }else if(n >= 16 && n <= 25){
        cout<<"Upper Double"<<endl;
    }else{
        cout<<"Upper Single"<<endl;
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