#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;

    if(n <  3){
        cout<<"GOLD"<<endl;
    }else if(n >= 3 and n < 6){
        cout<<"SILVER"<<endl;
    }else{
        cout<<"BRONZE"<<endl;
    }
    
}
int main()
{
    ASHRAFUL

  
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37