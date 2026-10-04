#include <bits/stdc++.h>
using namespace std;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<string> arr;
    string tmp;

    tmp += s[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i] == tmp.back())
        {
            tmp += s[i];
        }
        else
        {
            arr.push_back(tmp);
            tmp.clear();
            tmp += s[i];
        }
    }

    if (!tmp.empty())
        arr.push_back(tmp);

    int cnt = 0;
    int id1 = -1, id2 = -1;

    for (int i = 0; i < (int)arr.size(); i++)
    {
        if (arr[i][0] == '1')
        {
            cnt++;
            if (cnt == k - 1)
                id1 = i+1;

            if (cnt == k)
                id2 = i;
        }
    }

    swap(arr[id1], arr[id2]);

    string result;

    for (auto &x : arr)
        result += x;

    cout << result << '\n';
}

int main()
{
    ASHRAFUL

    solve();

    return 0;
}