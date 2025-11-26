#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
void solve()
{
    int type, marks;
    cin >> type;
    string name;

    if (type == 1)
    {
        cin >> name >> marks;       
        mp[name] += marks;
    }
    else if (type == 2)
    {
        cin >> name;
        mp.erase(name);
    }
    else
    {
        cin >> name;
        cout << mp[name] << endl;
    }
   
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