#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll maxCrossSum(vector<int> &arr, int l, int mid, int r)
{
    ll sum = 0, left_mx = LLONG_MIN, right_mx = LLONG_MIN;
    for (int i = mid; i >= l; i--)
    {
        sum += arr[i];
        left_mx = max(sum, left_mx);
    }

    sum = 0;
    for (int i = mid + 1; i <= r; i++)
    {
        sum += arr[i];
        right_mx = max(sum, right_mx);
    }

    return left_mx + right_mx;
}
ll maxSubarraySum(vector<int> &arr, int l, int r)
{
    if (l == r)
        return arr[l];

    int mid = (l + r) / 2;
    ll left_ans = maxSubarraySum(arr, l, mid);
    ll right_ans = maxSubarraySum(arr, mid + 1, r);
    ll cross_ans = maxCrossSum(arr, l, mid, r);

    return max({left_ans, right_ans, cross_ans});
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
    for (auto &x : v)
        cin >> x;

    cout << maxSubarraySum(v, 0, n - 1) << endl;
    return 0;
}