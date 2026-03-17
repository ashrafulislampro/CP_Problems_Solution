#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
struct Point{
    double x, y;    
};
bool cmp(Point &a, Point &b){
    if(a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}
void solve()
{
    pair<int, int> arr[5];
    for(int i = 0; i < 5; i++)
        cin>>arr[i].first>>arr[i].second;
    
    sort(arr, arr+5, cmp);
    for(auto [x, y]: arr)
        cout<<x<<" "<<y<<endl;
        
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37