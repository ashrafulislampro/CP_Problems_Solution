#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void bitwiseAnd(int N, int K)
{
    int ans = 0;
    for (int i = 1; i < N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            int val = i & j;
            if ((val > ans) && val < K)
                ans = val;
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL
    int t = 1;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        bitwiseAnd(N, K);
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37