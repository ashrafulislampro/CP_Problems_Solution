#include <iostream>
#include <set>
using namespace std;

void solve()
{
    int n, m;
    while (cin >> n >> m)
    {
        set<int> st;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            st.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            st.insert(x);
        }
        for (auto val : st)
        {
            cout << val << " ";
        }
        cout << endl;
    };
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