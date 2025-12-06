#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    set<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        st.insert(str[i]);
    }

    if (st.size() == str.size())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}