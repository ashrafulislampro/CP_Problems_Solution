#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if(n != k && k > 1){
        cout<<-1<<endl;
    }
    else{
        if(n == k){
            for(int i = 1; i <= n; i++)
                cout<< 1<<" ";
        }else{
            for(int i = 1; i <= n; i++)
                cout<< i<<" ";
        }
        cout<<endl;
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