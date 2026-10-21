#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> p(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            p[i + 1] = (p[i] + a[i]) % k;
        }

        long long ans = 0;
        vector<int> cnt(k, 0);

        for (int i = k + 1; i <= n; i++)
        {
            cnt[p[i - k - 1]]++;

            ans += cnt[p[i]];
        }

        cout << ans << '\n';
    }

    return 0;
}

// https://codeforces.com/problemset/problem/2276/C