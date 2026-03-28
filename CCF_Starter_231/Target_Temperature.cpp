#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    if (*arr.begin() == *arr.rbegin())
    {
        cout << "Yes" << endl;
        return;
    }

    for (auto &x : arr)
    {
        if (x == *arr.rbegin())
            break;
        freq[x]++;
    }
    for (auto [key, val] : freq)
    {
        if (val > 1)
        {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37