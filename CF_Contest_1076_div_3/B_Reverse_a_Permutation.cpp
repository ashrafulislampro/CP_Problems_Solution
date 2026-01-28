#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);

    for (int i = 0; i < n; i++)
        cin >> A[i];

    B = A;
    sort(B.rbegin(), B.rend());

    int l = -1, r = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            if (l == -1)
                l = i;
            r = i;
        }
    }

    if (l != -1)
        reverse(A.begin() + l, A.begin() + r + 1);

    for (int x : A)
        cout << x << " ";
    cout << "\n";
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}