#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d, t, sl;
    cin >> n;
    int s = INT_MIN, l = INT_MAX;
    for(int i = 1; i <= n; i++){
        cin>>d>>t;
        int sp = d/t;
        if(sp > s && t <= l){
            s = sp;
            l = t;
            sl = i;
        }
    }
    cout<<sl<<endl;
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