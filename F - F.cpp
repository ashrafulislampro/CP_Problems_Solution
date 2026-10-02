#include <bits/stdc++.h>
using namespace std;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n, k, cnt = 0;
    cin >> n >> k;

    string ss, ans = "", tmp = "";
    cin >> ss;

    if(k == 1){
        cout<< ss<<"\n\n";
        return;
    }
    
    for (int i = 0; i < n;)
    {
        if (ss[i] == '1')
        {
            cnt++;
            if (cnt <= k - 1)
            {
                ans += ss[i++];
                while (i < n && ss[i] == '1')
                {
                    ans += ss[i++];
                }
                continue;
            }

            if (cnt == k)
            {
                ans += ss[i++];
                while (i < n && ss[i] == '1')
                {
                    ans += ss[i++];
                }
            }
            tmp += ss[i++];
        }
        else
        {
            if (cnt < k - 1)
                ans += ss[i++];
            else
                tmp += ss[i++];
        }
    }

    ans = ans + tmp;
    cout << ans << "\n\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37