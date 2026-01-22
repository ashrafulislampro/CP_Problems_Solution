#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int cmp = 0;
void merge(vector<int> &arr, int l, int mid, int r)
{
    // tmp array
    vector<int> tmpL, tmpR;
    for (int i = l; i <= mid; i++)
        tmpL.push_back(arr[i]);
    for (int i = mid + 1; i <= r; i++)
        tmpR.push_back(arr[i]);

    int curIdx = l, left = 0, right = 0;
    while (left < tmpL.size() && right < tmpR.size())
    {
        if (tmpL[left] < tmpR[right])
        {
            arr[curIdx] = tmpL[left], left++, curIdx++, cmp++;
        }
        else
            arr[curIdx] = tmpR[right], right++, curIdx++, cmp++;
    }

    while (left < tmpL.size())
        arr[curIdx] = tmpL[left], left++, curIdx++, cmp++;
    while (right < tmpR.size())
        arr[curIdx] = tmpR[right], right++, curIdx++, cmp++;
}
void merge_sort(vector<int> &arr, int l, int r)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    merge_sort(v, 0, n - 1);
    // after sort the array

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i + 1 == n];
    cout << cmp << endl;
    return 0;
}