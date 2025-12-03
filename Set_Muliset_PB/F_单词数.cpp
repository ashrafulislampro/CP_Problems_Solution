#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    while (getline(cin, str) && str != "#")
    {
        set<string> st;
        stringstream ss(str);
        string word;
        while (ss >> word)
        {
            st.insert(word);
        }
        cout << st.size() << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}