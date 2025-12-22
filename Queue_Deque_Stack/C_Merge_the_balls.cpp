#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == v[i])
        {
            st.pop();
            int tmp = v[i] + 1;
            while (!st.empty() && st.top() == tmp)
            {
                tmp++;
                st.pop();
            }
            st.push(tmp);
        }
        else
        {
            st.push(v[i]);
        }
    }
    cout << st.size() << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}