#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool check(int l, int r, vector<int> &a, int mid)
{
    int n = a.size();
    if (l > r)
        return false;
    for (int i = l; i < r; i++)
    {
        if (2 * abs(a[i] - a[i + 1]) > mid)
            return false;
    }
    return (l == 0 || abs(a[l - 1] - 2 * a[r]) <= mid) && (r == n - 1 || abs(2 * a[l] - a[r + 1]) <= mid);
}

bool myfunc(int mid, vector<int> &a, int n)
{
    int l = -1, r = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) > mid)
        {
            if (l == -1)
                l = i;
            r = i;
        }
    }

    if (l == -1)
        return true;

    if (l != r)
        return check(l + 1, r, a, mid);
    for (int i = l + 1; i < n && (i == l + 1 || 2 * abs(a[i - 1] - a[i]) <= mid); i++)
    {
        if ((l + 1 == 0 || abs(a[l] - 2 * a[i]) <= mid) && (i == n - 1 || abs(2 * a[l + 1] - a[i + 1]) <= mid))
        {
            return true;
        }
    }
    for (int i = l; i >= 0 && (i == l || 2 * abs(a[i + 1] - a[i]) <= mid); i--)
    {
        if ((i == 0 || abs(a[i - 1] - 2 * a[l]) <= mid) && (l == n - 1 || abs(2 * a[i] - a[l + 1]) <= mid))
        {
            return true;
        }
    }

    return false;
}
signed main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int start = 0;
        int end = 2e9;
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (myfunc(mid, a, n))
            {
                end = mid - 1;
                ans = mid;
            }
            else
            {
                start = mid + 1;
            }
        }
        cout << ans << endl;
    }
}
