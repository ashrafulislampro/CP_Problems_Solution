#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<long long> q(n + 1), r(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> q[i] >> r[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int t;
        long long d;
        cin >> t >> d;
        long long rem = d % q[t];
        long long ans;
        if (rem <= r[t])
            ans = d + (r[t] - rem);
        else
            ans = d + (q[t] - rem) + r[t];
        cout << ans << "\n";
    }
    return 0;
}