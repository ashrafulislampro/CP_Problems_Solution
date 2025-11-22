#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<char> st;
    char c;
    while (cin >> c)
    {
        if (c != ' ')
        {
            st.insert(tolower(c));
        }
    }
    if (st.size() == 26)
        cout << "pangram";

    else
        cout << "not pangram";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}