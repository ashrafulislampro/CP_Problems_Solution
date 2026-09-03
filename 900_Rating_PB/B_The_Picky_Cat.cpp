#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a)
        {
            cin >> x;
        }

        vector<pair<int, int>> pairs;

        for (int i = 0; i < n; i++)
        {
            pairs.push_back({abs(a[i]), i});
        }

        sort(pairs.begin(), pairs.end());

        vector<int> ans(n, 0);

        for (int i = 0; i < n / 2 + 1; i++)
        {
            int index = pairs[i].second;
            ans[index] = 1;
        }
       
        if (ans[0])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}