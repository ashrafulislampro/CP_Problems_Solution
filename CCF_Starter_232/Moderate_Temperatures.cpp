#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> st;
        int mn = INT_MAX, mn_cnt = 0, mx_cnt = 0, mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.push_back(x);
            mn = min(x, mn);
            mx = max(x, mx);
        }
        sort(st.begin(), st.end());
        if (st.front() == st.back())
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (st[i] == mn)
                mn_cnt++;
            if (st[i] == mx)
                mx_cnt++;
        }

        if (st.size() >= 3 and st.size() >= (mn_cnt + mx_cnt))
        {
            cout << (st.size() - (mn_cnt + mx_cnt)) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
