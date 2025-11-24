#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct tpl
{
    ll c, l, r;
};
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<tpl> arr(q);
    vector<ll> diff1(n + 5, 0), diff2(n + 5, 0), ans(n + 1, 0);

    for (int i = 0; i < q; i++)
    {
        cin >> arr[i].c >> arr[i].l >> arr[i].r;
        if(arr[i].c == 2){
            diff2[arr[i].l]++, diff2[arr[i].r+1]--; // ekhane K thaka nished // MEX
        }else{
            diff1[arr[i].l]++, diff1[arr[i].r+1]--; // ekhane K er choto kichu thake
        }
    }

    for(int i = 1, mexCaseUse = 0; i <= n; i++){
        diff1[i] += diff1[i-1];
        diff2[i] += diff2[i-1];
        if(diff1[i] && diff2[i]){
            ans[i] = 1e9; // != k and > k

        }else if(diff1[i]){
            ans[i] = k; // min(....) = k
        }else if(diff2[i]){
            // pore handle krtesi eita
            ans[i] = (mexCaseUse++ % k);
        }else{
            ans[i] = 1e9; // ata kono conditionai contribute kre na..
        }

        cout<<ans[i]<<" \n"[i==n];
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}