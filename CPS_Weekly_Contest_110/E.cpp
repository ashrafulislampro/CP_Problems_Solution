#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define all(x) (x).begin(), (x).end()
#define input(arr)       \
    for (auto &it : arr) \
    cin >> it
#define forr(k, n) for (int i = k; i < n; i++) // k = start,  n = end
#define forrr(k, n) for (int i = k; i >= n; i--)
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
int r, c;
bool isOk(int row, int col)
{
    if (row < 0 || row >= r || col < 0 || col >= c)
        return false;
    return true;
}
void solve()
{
    int a, b, i, j, k, m, n, o, x, y, z, ans = 0;
    cin >> r >> c >> x >> y;
    vector<string> grid(r);
    input(grid);
    int visited[r][c] = {0};
    string ss;
    cin >> ss;
    x--, y--;

    map<char, pii> mp;
    mp['U'] = {-1, 0};
    mp['D'] = {1, 0};
    mp['L'] = {0, -1};
    mp['R'] = {0, 1};

    n = ss.sz();
    for (int i = 0; i < n; i++)
    {
        char ch = ss[i];

        int xx = x + mp[ch].ft;
        int yy = y + mp[ch].sd;
        
        if (isOk(xx, yy) and grid[xx][yy] != '#')
        {
            if (visited[xx][yy] == 0 and grid[xx][yy] =='@')
                ans++;
            x = xx;
            y = yy;
            visited[xx][yy] = 1;
        }
    }
    cout << x + 1 << " " << y + 1 << " " << ans;
}
int main()
{
    ASHRAFUL

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve(), cout << "\n";
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37