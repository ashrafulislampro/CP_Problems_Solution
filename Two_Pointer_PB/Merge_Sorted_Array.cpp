#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
         vector<int> ans;

        int p1 = 0, p2 = 0;
        while(p1 < m or p2 < n){
            if(p1 == m){
                ans.push_back(nums2[p2]);
                p2++;
            }else if(p2 == n){
                ans.push_back(nums1[p1]);
                p1++;
            }else if(nums1[p1] <= nums2[p2]){
                ans.push_back(nums1[p1]);
                p1++;
            }else{
                ans.push_back(nums2[p2]);
                p2++;
            }
        }
        for(auto val: ans){
            cout<<val<<" ";
        }
    }
};
void solve()
{
    int n, m;
    cin >> m >> n;
    vector<int> arr(m), arr2(n);
    for (auto &x : arr)
        cin >> x;
    for (auto &x : arr2)
        cin >> x;

    Solution obj;
    obj.merge(arr, m, arr2, n);
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37