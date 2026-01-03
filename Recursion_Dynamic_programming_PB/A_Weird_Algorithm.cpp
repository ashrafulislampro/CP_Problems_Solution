#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long
void recursion(int n){
    cout<<n<<" ";
    if(n == 1)return;
    if(n % 2 == 0)recursion(n/2);
    else if(n % 2 == 1) recursion(n*3+1);

}
void solve()
{
    int n;
    cin >> n;
    recursion(n);
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}