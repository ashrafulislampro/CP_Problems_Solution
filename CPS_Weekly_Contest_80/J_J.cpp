#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, A_cnt = 0, B_cnt = 0;
    cin >> n;
    A_cnt = 1;
    n -= 1;
    int k = 2, A_ct = 0, B_ct = 2;

    while(n > 0){
        for(int i = 1; i <= 2; i++){
            if(n >= k)
                B_cnt += k, n -= k, k++;
            else B_cnt += n, n = 0, k++;
        }
        for(int i = 1; i <= 2; i++){
            if(n >= k)
                A_cnt += k, n -= k, k++;
            else A_cnt += n, n = 0, k++;
        }
    }



        cout<<A_cnt <<" "<<B_cnt<<endl;
    
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37