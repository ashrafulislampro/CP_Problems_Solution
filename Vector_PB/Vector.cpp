#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int op, x;

        cin >> op;
        if (op == 0)
        {
            cin >> x;
            v.push_back(x);
        }
        else if (op == 1)
        {
            cin >> x;
            cout << v[x] << endl;
        }
        else if (op == 2)
        {
            v.pop_back();
        }
    }
   
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}