#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, val;
    cin >> n;
    string str;
    cin >> str;
    set<int> st;
    val = n * 2;
    st.insert(val);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '<')
        {
            st.insert(++val);
        }
        else
        {
            st.insert(--val);
        }
    }
    cout << st.size() << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

// 3
// 7
// 3
// 3
// 3
// 4
// 3
// 4
// 5
// 3
// 3
// 3
// 3
// 4
// 3
// 3
// 5
// 4
// 5
// 5
// 5
// 2
// 3
// 3
// 4
// 8
// 4
// 4
// 4
// 2
// 3
// 5
// 3
// 3
// 3
// 6
// 4
