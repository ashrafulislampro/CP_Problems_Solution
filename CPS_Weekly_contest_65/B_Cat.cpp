#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str, from_s = "na", to_s = "nya";
    cin >> str;
    size_t pos = 0;
    while ((pos = str.find(from_s, pos)) != string::npos)
    {
        str.replace(pos, from_s.size(), to_s);
        pos += to_s.size();
    }

    cout << str << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}