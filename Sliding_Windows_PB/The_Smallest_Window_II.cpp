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
    vector<int> arr(n);
    for (auto &x : arr)
        cin >> x;

    queue<int> q;
    vector<int> cnt(n + 1);
    int present_cnt = 0, i, ans = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > k)
        {
            q.push(arr[i]);
            continue;
        }
        if (cnt[arr[i]] == 0)
            present_cnt++;
        cnt[arr[i]]++;
        q.push(arr[i]);
        if (present_cnt == k)
            break;
    }

    if (i == n)
    {
        cout << 0 << endl;
        return;
    }
    ans = q.size();
    
    for (; i < n;)
    {
        int val = q.front();
        q.pop();
        
        if (val > k)
        {
            ans = min(ans, (int)q.size());
            continue;
        }
        cnt[val]--;

        while (cnt[val] == 0 && i < n)
        {
            if (arr[++i] > k)
            {
                q.push(arr[i]);               
                continue;
            }
            cnt[arr[i]]++;
            q.push(arr[i]);
            
        }       
        ans = min(ans, (int)q.size());
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37