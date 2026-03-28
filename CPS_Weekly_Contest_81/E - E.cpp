#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> A(n), B(m), C;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A[i] = x;
        C.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        B[i] = x;
        C.push_back(x);
    }
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());

    for (int i = 0, j = 0; i < n + m - 1 && j < n - 1; i++)
    {
        if (C[i] == A[j] and C[i + 1] == A[j + 1])
        {
            cout << "Yes" << endl;
            return;
        }
        if(C[i] == A[j])j++;
    }

    cout << "No" << endl;
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37