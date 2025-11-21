#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if(n % 2 == 1){
        cout<<0<<endl;
        return;
    }

    if(n == 2){
        cout<<1<<endl;
        return;
    }
    if(n == 4){
        cout<<2<<endl;
        return;
    }

    if(n % 4 == 0){
        cout<<(n / 4)+ 1<<endl;

    }else{
        int rem = n % 4;
        int c = n / 4;
        cout<<(c+(rem/2))<<endl;
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