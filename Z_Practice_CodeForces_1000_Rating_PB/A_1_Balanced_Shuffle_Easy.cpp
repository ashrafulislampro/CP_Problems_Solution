#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
bool cmp(pii &a, pii &b)
{
    if (a.ft == b.ft)
    {
        return a.sd > b.sd;
    }
    return a.ft < b.ft;
}
void solve()
{
    string ss;
    cin >> ss;

    int cnt = 0;
    vector<pii> arr;

    for (int i = 0; i < (int)ss.sz(); i++)
    {
        if (ss[i] == '(')
        {
            arr.push_back({cnt, i});
            cnt++;
        }
        if (ss[i] == ')')
        {
            arr.push_back({cnt, i});
            cnt--;
        }
    }

    sort(arr.begin(), arr.end(), cmp);

    string ans = "";
    for (auto it : arr)
        ans += ss[it.sd];

    cout << ans << "\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37