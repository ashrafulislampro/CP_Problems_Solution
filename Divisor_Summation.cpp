#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define ft first 
#define sd second 
#define pb(x) push_back(x) 
#define ph(x) push(x) 
#define pp() pop() 
#define sz() size() 
#define pll pair<ll, ll> 
template<typename T>
using vec = vector<T>;
 
using ll = long long; 
const ll inf = (ll) 1e18; 
const ll N = (ll) 3e5 + 5; 
const ll mod = (ll) 1e9 + 7; 

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    st.insert(1);
    int len = sqrt(n);

    for(int i = 2; i <= len; i++){
        if(n%i == 0){
            st.insert(i);
            st.insert(n/i);
        }
    }
    ll sum = 0;
    for(auto &it: st){
        sum += it;
    }

    if(1 == n || n == 0){
        cout<<0<<"\n";
    }else{
        cout<<sum<<"\n";
    }
    
}
int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37