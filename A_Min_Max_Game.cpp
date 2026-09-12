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
    int n, x;
    cin >> n;
    string ss = "";
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        ss += ch;
    }
    int j = 1;
    while (true)
    {
        string tmp(1, ss.front());

        if (ss.sz() < 2 or find(ss.begin(), ss.end(), '0') != ss.end() or find(ss.begin(), ss.end(), '1') != ss.end())
            break;

        bool flg = true;

        for (int i = 1; i < ss.sz(); i++)
        {
            if (flg && (tmp.back() != ss[i]))
            {
                if (j % 2 == 1)
                {
                    if (tmp.back() == '0')
                        tmp.pop_back(), tmp += '1';
                }
                else
                {
                    char ch = tmp.back();
                    char ch2 = ss[i];
                    char mn = min(ch, ch2);
                    // cout << ch << " " << ch2 << endl;
                    tmp.pop_back();
                    tmp += mn;
                }
                j++;
                flg = false;
            }
            else
                tmp += ss[i];
        }
        // cerr << tmp << endl;
        ss = tmp;
    }

    if (*ss.begin() == '1')
        cout << "Bessie\n";
    else
        cout << "Elsie\n";
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