#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n), B(n);
    for (auto &x : A)
        cin >> x;
    for (auto &x : B)
        cin >> x;

    bool flg = true;
    int ans = 0;
    for (int i = 1; i <= 2000 && flg; i++)
    {
        int tmp = k, cnt = 0;
        for (int j = 0; j < n; j++)
        {
            int val = A[j] * i;
            if (val <= B[j])
            {
                cnt++;
            }
            else
            {

                int minus = abs(B[j] - val);
                if (minus <= tmp)
                {
                    tmp -= minus;
                    cnt++;
                }
                else
                {
                    flg = false;
                    break;
                }
            }
        }
        if (cnt == n)
        {            
            ans = i;
        }
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL
    
    solve();
    return 0;
}