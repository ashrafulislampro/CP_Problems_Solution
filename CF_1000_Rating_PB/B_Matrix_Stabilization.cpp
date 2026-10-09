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

int n, m;
vector<pair<int, int>> pr = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
bool isOk(int sr, int sc)
{
    if (sr < 0 || sr >= n || sc < 0 || sc >= m)
        return false;
    return true;
}
void solve()
{

    cin >> n >> m;

    int grid[n + 1][m + 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    for (int k = 0; k < 100; k++)
    {
        bool flg = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int cnt = 0, mx = 0, mx_cnt = 0;
                for (auto it : pr)
                {
                    int sr = i + it.ft;
                    int sc = j + it.sd;

                    if (isOk(sr, sc))
                    {

                        cnt++;
                        if (grid[i][j] > grid[sr][sc])
                        {
                            mx_cnt++;
                            mx = max(mx, grid[sr][sc]);
                            flg = false;
                        }
                    }
                }
                
                if (cnt == mx_cnt)
                    grid[i][j] = mx;
            }
        }
        if (flg)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << grid[i][j] << ' ';
        cout << "\n";
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