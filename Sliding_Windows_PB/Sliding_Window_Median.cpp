#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

multiset<int> ms1, ms2;

void balance()
{
    int sz = ms1.size() + ms2.size();

    int s1 = (sz + 1) / 2;
    int s2 = sz - s1;

    while ((int)ms1.size() > s1)
    {
        ms2.insert(*ms1.rbegin());
        ms1.erase(--ms1.end());
    }

    while ((int)ms2.size() > s2)
    {
        ms1.insert(*ms2.begin());
        ms2.erase(ms2.begin());
    }
}
void add(int x)
{
    if (ms1.empty())
    {
        ms1.insert(x);
    }
    else
    {
        if (x > *ms1.rbegin())
        {
            ms2.insert(x);
        }
        else
        {
            ms1.insert(x);
        };
    }
    balance();
}
void remove(int x)
{
    auto it = ms1.find(x);
    if (it != ms1.end())
    {
        ms1.erase(it);
    }
    else
    {
        ms2.erase(ms2.find(x));
    }
    balance();
}

void solve()
{

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    for (int i = 0; i < k; i++)
    {
        add(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << *ms1.rbegin() << " ";

        remove(v[i]);
        if (i + k < n)
        {
            add(v[i + k]);
        }
        else
        {
            break;
        }
    }
    cout << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37