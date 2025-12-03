#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, y, x;
    cin >> n;
    set<int> st;
    while (n--)
    {
        cin >> y >> x;
        if (y == 1)
        {
            st.insert(x);
        }
        else if (y == 2)
        {
            auto it = st.find(x);
            if (it != st.end())
            {
                st.erase(it);
            }
        }
        else
        {
            if (st.count(x))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
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