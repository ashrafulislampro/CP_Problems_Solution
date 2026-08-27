#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

pair<ll, ll> leaf_level_count(string &a)
{
    ll n = a.size();
    vector<ll> tree[n + 1], level[n + 1];
    stack<ll> st;
    st.push(0);
    level[0].push_back(0);
    ll cur = 0, lv = 0;
    for (auto &it : a)
    {
        if (it == '(')
        {
            cur++, lv++;
            tree[st.top()].push_back(cur); // Parent-Child
            st.push(cur);
            level[lv].push_back(cur);
        }
        else
        {
            st.pop();
            lv--;
        }
    }
    ll multiNodes = 0;
    for (int i = 0; i <= n; i++)
    {
        if (!tree[i].empty())
            multiNodes += tree[i].size() - 1;
    }
    ll leaf = 1 + multiNodes;
    ll targetLv = 0, set = false;
    for (int i = 0; i <= n && !set; i++)
    {
        for (auto &nodes : level[i])
        {
            if (tree[i].size() > 1)
            {
                targetLv = i;
                set = true;
                break;
            }
        }
    }
    return {leaf, targetLv};
}
void Solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if (leaf_level_count(a) == leaf_level_count(b))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }
    return 0;
}
// Coded by Tahsin Arafat (@TahsinArafat)
