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

void solve()
{
    int n, o_cnt = 0, t_cnt = 0, sl_cnt = 0;
    cin >> n;
    string ss;
    cin >> ss;

    for (int i = 0; i < n; i++)
    {
        if (ss[i] == '1')
            o_cnt++;
        if (ss[i] == '2')
            t_cnt++;
        if (ss[i] == '/')
            sl_cnt++;
    }
    if(o_cnt == t_cnt and o_cnt == 0 and sl_cnt == 1)
        cout<<"Yes\n";
    else if (o_cnt == t_cnt and sl_cnt == 1)
    {       
        int val = ((n + 1) / 2) + 1;
        int val2 = ((n + 1) / 2);
        int val3 = ((n + 1) / 2) - 1;

        if (ss[--val] == '2' and ss[--val2] == '/' and ss[--val3] == '1')
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
    }
    else
        cout << "No\n";
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37