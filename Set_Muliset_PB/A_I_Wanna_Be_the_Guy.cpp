#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, p, q;
    cin >> n;
    set<int> st;
    cin >> p;
    while (p > 0)
    {
        cin >> x;
        st.insert(x);
        p--;
    }
    cin >> q;
    while (q > 0)
    {
        cin >> x;
        st.insert(x);
        q--;
    }
    if (st.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}