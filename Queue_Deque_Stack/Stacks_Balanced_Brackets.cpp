#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto &it : s)
    {
        if (it == '(' || it == '{' || it == '[')
        {
            st.push(it);
        }
        else
        {
            if (!st.empty())
            {
                char ch = st.top();
                if (ch == '(' && it == ')')
                {
                    st.pop();
                }
                else if (ch == '{' && it == '}')
                {
                    st.pop();
                }
                else if (ch == '[' && it == ']')
                {
                    st.pop();
                }
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }
    if (st.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}