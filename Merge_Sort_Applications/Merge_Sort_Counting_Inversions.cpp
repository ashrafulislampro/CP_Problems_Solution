#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll inv = 0;

void merge(vector<ll> &arr, ll l, ll mid, ll r)
{
    vector<ll> tmpL, tmpR;
    for (ll i = l; i <= mid; i++)
        tmpL.push_back(arr[i]);
    for (ll i = mid + 1; i <= r; i++)
        tmpR.push_back(arr[i]);

    ll curIdx = l, left = 0, right = 0;
    while (left < tmpL.size() && right < tmpR.size())
    {
        if (tmpL[left] <= tmpR[right])
            arr[curIdx] = tmpL[left], left++, curIdx++;
        else
            arr[curIdx] = tmpR[right], right++, curIdx++, inv += (tmpL.size() - left);
    }

    while (left < tmpL.size())
        arr[curIdx] = tmpL[left], left++, curIdx++;
    while (right < tmpR.size())
        arr[curIdx] = tmpR[right], right++, curIdx++;
}
void merge_sort(vector<ll> &arr, ll l, ll r)
{
    if (l >= r)
        return;

    ll mid = (l + r) / 2;
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
    ll T = 1;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        inv = 0;
        merge_sort(v, 0, n - 1);
        cout << inv << endl;
    }
    return 0;
}