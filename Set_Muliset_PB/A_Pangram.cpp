#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    set<char> st;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), :: tolower);
    for (int i = 0; i < n; i++)
    {
        st.insert(str[i]);
    }
    
    if (st.size() == 26)
        cout << "YES" << endl;
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