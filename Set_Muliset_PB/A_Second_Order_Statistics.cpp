#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    set<int> st;
    while (n--)
    {
        cin >> x;
        st.insert(x);
    }

    if (st.size() > 1)
        cout << *(++st.begin()) << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}