#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll sum = 0;

void merge(vector<int> &arr, int l, int mid, int r){
    vector<int> tmpL, tmpR;
    for(int i = l; i <= mid; i++)tmpL.push_back(arr[i]);
    for(int i = mid+1; i <= r; i++)tmpR.push_back(arr[i]);

    int curIdx = l, left = 0, right = 0;
    while(left < tmpL.size() && right < tmpR.size()){
        if(tmpL[left] < tmpR[right])
            arr[curIdx] = tmpL[left], left++, curIdx++;
        else arr[curIdx] = tmpR[right], right++, curIdx++;
    }

    while(left < tmpL.size())
        arr[curIdx] = tmpL[left], left++, curIdx++;
    while(right < tmpR.size())
        arr[curIdx] = tmpR[right], right++, curIdx++;
}
void merge_sort(vector<int> &arr, int l, int r)
{
    if(l >= r)return;

    int mid = (l+r)/2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid+1, r);
    merge(arr, l, mid, r);
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x: v)cin>>x;
    merge_sort(v, 0, n-1);

    cout<<sum<<endl;
    return 0;
}