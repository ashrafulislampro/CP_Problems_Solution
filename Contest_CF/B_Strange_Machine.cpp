#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q, len;
    cin >> n >> q;
    string str;
    cin >> str;
    len = str.size();
    vector<int> v(q);
    for (auto &x : v)
        cin >> x;

    for (int i = 0; i < q; i++)
    {
        int num = v[i];
        size_t pos = str.find('B');
        if (pos == string::npos)
        {
            cout << num << endl;
        }
        else
        {
            int cnt = 0, k = 0;

            while (num > 0)
            {
                if (str[k] == 'B')
                {
                    num /= 2;
                    cnt++;
                }
                if (str[k] == 'A')
                {
                    num--;
                    cnt++;
                }
                k++;
                if (k == len)
                    k = 0;
            }
            cout << cnt << endl;
            
        }
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