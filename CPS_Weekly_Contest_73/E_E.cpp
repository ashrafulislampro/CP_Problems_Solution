#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int sz = s.size();
    vector<string> st;
    for (int i = 1; i <= sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            string res = "";
            for (int k = 0; k < i; k++)
            {
                if (k + j < sz)
                    res += s[k + j];
            }
            // cout << res << endl;

            if (find(st.begin(), st.end(), res) == st.end())
                st.push_back(res);
        }
    }

    cout << st.size() << endl;
    // for (auto val : st)
    // {
    //     cout << val << " ";
    // }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}