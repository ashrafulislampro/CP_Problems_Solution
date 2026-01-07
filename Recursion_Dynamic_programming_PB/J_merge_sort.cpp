#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> arr[30000];

void merge(vector<int> &v, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);
    // temp data of array
    for (int i = 0; i < n1; i++)
        L[i] = v[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = v[mid + 1 + i];

    // merge array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            v[k++] = L[i++];
        }
        else
        {
            v[k++] = R[j++];
        }
    }
    // remaining element
    while (i < n1)
        v[k++] = L[i++];
    while (j < n2)
        v[k++] = R[j++];
}

void mergesort(vector<int> &v, int left, int right, int key)
{
    for(int i = left; i <= right; i++)arr[key].push_back(v[i]);
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    
    mergesort(v, left, mid, key * 2);    
    mergesort(v, mid + 1, right, key*2 + 1);
    merge(v, left, mid, right);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
   
    mergesort(v, 0, v.size() - 1, 1);

    int person = 1;
    for(int i = 0; i < 30000; i++){
        if(arr[i].empty())continue;
        cout<<person<< " person is given with these numbers :";
        person++;
        for(auto it: arr[i])cout<<it<<" ";
        cout<<endl;
    }
    // after sorting the array
    cout << "After Sorting the elements are : ";
    for (auto val : v)
        cout << val << " ";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}