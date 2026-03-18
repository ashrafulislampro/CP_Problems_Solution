#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Ordered Set Declaration
template <typename T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update>;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
struct Cmbn
{
    string s;
    int inversion_cnt;
};

bool cmp(Cmbn &a, Cmbn &b)
{
    return a.inversion_cnt < b.inversion_cnt;
};
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<Cmbn> arr(m);
    string ss;
    for (int i = 0; i < m; i++)
    {
        cin >> ss;
        ordered_set<pair<char, int>> st;
        int ans = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            ans += st.order_of_key({ss[j], j});
            st.insert({ss[j], j});
        }
        arr[i].s = ss;
        arr[i].inversion_cnt = ans;    
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i = 0; i < m; i++)
    {
        cout << arr[i].s << endl;
    }
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