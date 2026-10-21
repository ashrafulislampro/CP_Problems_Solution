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
    string ss;
    char ch;
    cin >> ss;
    cin >> ch;

    if (ch == '9')
    {
        int n = ss.sz(), id, flg = 1;
        for (int i = 0; i < n; i++)
        {
            if (ss[i] == ch and flg)
            {
                ss[i] = '0';
                id = i;
                flg = 0;
                continue;
            }
            if (flg == 0)
                ss[i] = '0';
        }
        if (id == 0)
        {
            ss = "1" + ss;
        }
        else
        {

            int val = (ss[id - 1] - '0') + 1;
            while (val == 9)
            {
                ss[id - 1] = '0';
                --id;
                if (id == 0)
                    break;
                val = (ss[id - 1] - '0') + 1;
            }
            if (id == 0)
            {
                ss = '1' + ss;
            }
            else
            {
                val = (ss[id - 1] - '0') + 1;
                ss[id - 1] = val + '0';
            }
        }

        cout << ss << "\n";
    }
    else
    {
        int cnt = count(ss.begin(), ss.end(), ch);
        if (cnt == 0)
        {
            cout << ss << "\n";
        }
        else
        {
            int n = ss.sz(), flg = 1;
            for (int i = 0; i < n; i++)
            {
                if (ss[i] == ch and flg)
                {
                    ss[i] = ((ch - '0') + 1) + '0';
                    flg = 0;
                    continue;
                }
                if (flg == 0 and ch != '0')
                    ss[i] = '0';
                else if (ch == '0')
                    ss[i] = '1';
            }
            cout << ss << "\n";
        }
    }
}

int main()
{
    ASHRAFUL

    int T = 1;
    cin >> T;
    while (T--)
        solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37