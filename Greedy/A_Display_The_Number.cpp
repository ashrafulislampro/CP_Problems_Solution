#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    while(n != 0){
        if(n % 2 == 1){
            str += "7";
            n-= 3;
        }else{
            str += "1";
            n -= 2;
        }
    }
    cout<<str<<endl;
    
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