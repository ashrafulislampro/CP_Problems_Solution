#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    set<int> st;
    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        st.insert(x);
    }
    cout << 4 - st.size() << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}