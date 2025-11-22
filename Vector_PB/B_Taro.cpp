#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string c1, c2;
    vector<string> v(m), vec;
    
    for (int i = 0; i < m; i++)
    {
        cin >> c1 >> c2;

        v[i] = c1 + c2;

        if (c2 == "M")
        {
            auto it = find(vec.begin(), vec.end(), c1 + c2);
            if (it == vec.end())
            {
                vec.push_back(c1 + c2);
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        auto it = find(vec.begin(), vec.end(), v[i]);
        if (it != vec.end())
        {
            cout<<"Yes"<<endl;
            vec.erase(it);
        }else{
            cout<<"No"<<endl;
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