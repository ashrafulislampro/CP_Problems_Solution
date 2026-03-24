#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
vector<int> arr;
int n;
void rec(int idx, vector<int> st)
{
    if (idx == n)
    {
        for (auto ss : st)
        {
            cout << ss << " ";
        }
        cout << endl;
        return;
    }
    rec(idx + 1, st);
    // cout << "idx = " << idx << endl;
    st.push_back(arr[idx]);
    rec(idx + 1, st);
}
void solve()
{

    cin >> n;
    arr.resize(n);
    for (auto &x : arr)
        cin >> x;

    rec(0, vector<int>());
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37