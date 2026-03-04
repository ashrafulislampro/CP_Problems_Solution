#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    string s;
    cin >> s;

    int present_cnt = 0, ans = 0, sz = s.size(), i;
    vector<int> freq(4);
    queue<char> q;
    for (i = 0; i < sz; i++)
    {
        q.push(s[i]);
        if (freq[s[i] - '0'] == 0)
            present_cnt++;
        freq[s[i] - '0']++;
        if (present_cnt == 3)
            break;
    }

    if (i == sz)
    {
        cout << 0 << endl;
        return;
    }
    ans = q.size();

    while (i < sz)
    {
        char ch = q.front();
        q.pop();
        if (freq[ch - '0'] > 1)
        {
            ans = min(ans, (int)q.size());
            freq[ch - '0']--;
            continue;
        }
       
        freq[ch - '0']--;
        while (freq[ch - '0'] == 0 && i < sz)
        {
            if (++i < sz)
            {
                q.push(s[i]);
                freq[s[i] - '0']++;
            }
            else
                break;
           
        }
        ans = min(ans, (int)q.size()+1);
    }
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        // cout<<"Case #: "<<i<<" ";
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37