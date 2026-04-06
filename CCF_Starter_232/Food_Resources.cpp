#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
int N, M;
vector<int> arr;
bool isOk(int mid){
    int cnt = 0;
    for(int i = 0; i < N; i++){
        cnt += arr[i]/mid;
    }
    return cnt >= M;
}
void solve()
{

    cin >> N >> M;
    arr.resize(N);

    int ans = 0, l = 1, r = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        r = max(r, arr[i]);
    }

    while(l <= r){
        int mid = l + (r - l)/2;
        if(isOk(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }

    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37