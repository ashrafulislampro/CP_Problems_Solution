#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    // vector<char> A_arr, B_arr;
    string A_st = "", B_st = "";
    for(int i = 0; i < 6; i++){
        char ch;
        cin>>ch;
        if(i < 3)A_st.push_back(ch);
        else B_st.push_back(ch);
    }
    sort(A_st.rbegin(), A_st.rend());
    sort(B_st.rbegin(), B_st.rend());

    if(A_st == B_st){
        cout<<"Tie"<<endl;
    }else if(A_st > B_st){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
    }
    
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37