#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st.insert(x);
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