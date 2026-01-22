#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void merge_f(int l, int r, int mid, vector<int> &arr)
{
    // temporary array to store data
    vector<int> tmpL, tmpR;
    for (int i = l; i <= mid; i++)
        tmpL.push_back(arr[i]);
    for (int i = mid + 1; i <= r; i++)
        tmpR.push_back(arr[i]);

    // merge sorted solution
    int curIdx = l, left = 0, right = 0;
    while (left < tmpL.size() && right < tmpR.size())
    {
        if (tmpL[left] < tmpR[right])
            arr[curIdx] = tmpL[left], left++, curIdx++;
        else
            arr[curIdx] = tmpR[right], right++, curIdx++;
    }

    // remaining data
    while (left < tmpL.size())
        arr[curIdx] = tmpL[left], left++, curIdx++;
    while (right < tmpR.size())
        arr[curIdx] = tmpR[right], right++, curIdx++;
}
void divide_f(int l, int r, vector<int> &arr)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;
    divide_f(l, mid, arr);
    divide_f(mid + 1, r, arr);
    merge_f(l, r, mid, arr);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int x;
    vector<int> v;
    while (cin >> x)
        v.push_back(x);

    divide_f(0, v.size() - 1, v);

    // after sorting the array
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " \n"[i + 1 == v.size()];

    return 0;
}