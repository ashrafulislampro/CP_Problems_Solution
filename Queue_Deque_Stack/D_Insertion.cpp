#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s, tmp;
    cin >> s;
    stack<char> st;
    for (auto x : s)
    {
        if (x == '(')
        {
            st.push(x);
        }
        else
        {
            if (st.size())
            {
                st.pop();
            }
            else
            {
                tmp += '(';
            }
        }
    }
    s = tmp + s;
    int cnt = 0;
    for (auto x : s)
    {
        if (x == '(')
            cnt++;
        else
            cnt--;
    }
    while (cnt--)
        s += ')';
    cout << s << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}