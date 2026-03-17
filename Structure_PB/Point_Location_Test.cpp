#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct Point{
    ll x1, x2, x3, y1, y2, y3;
    void display(Point &a){
        ll val = ((a.x2-a.x1)*(a.y3-a.y1)) - ((a.y2-a.y1)*(a.x3-a.x1));
        if(val == 0){
            cout<<"TOUCH"<<endl;
        }else if(val < 0){
            cout<<"RIGHT"<<endl;
        }else{
            cout<<"LEFT"<<endl;
        }
    }
};
void solve()
{
    int n;
    cin>>n;

    Point arr[n], obj;
    for(int i = 0; i < n; i++){
        cin>>arr[i].x1>>arr[i].y1>>arr[i].x2>>arr[i].y2>>arr[i].x3>>arr[i].y3;
    }
    for(int i = 0; i < n; i++){
        obj.display(arr[i]);
    }
   
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