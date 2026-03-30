#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> A, B;
vector<int> dp(10001, -1);
int H, N;
int rec_fun(int rem_h){
    if(rem_h <= 0)return 0;

    if(dp[rem_h] != -1)
        return dp[rem_h];

    int ans = INT_MAX;
    for(int i = 0; i < N; i++){
        ans = min(ans, B[i]+rec_fun(rem_h - A[i]));
    }

    return dp[rem_h] = ans;
}
void solve()
{
    
    cin >> H>>N;
    A.resize(N);
    B.resize(N);
    for(int i = 0; i < N; i++){
        cin>>A[i]>>B[i];
    }


    cout<<rec_fun(H)<<endl;

}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37