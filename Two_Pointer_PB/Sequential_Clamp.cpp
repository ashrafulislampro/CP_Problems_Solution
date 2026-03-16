#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> arr;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        arr.push_back({a, b});
    }
    int ans = INT_MIN;
    for(int i = 1; i <= 110; i++){
        int y = i;
        for(int j = 0; j < n; j++){
            int A = arr[j].first;
            int B = arr[j].second;
            if(A <= y and y <= B)continue;
            if(A > y)y = A;
            if(y > B)y = B;
        }
        ans = max(ans, y);
    }
    cout<<ans<<endl;
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