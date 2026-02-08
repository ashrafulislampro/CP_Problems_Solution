#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char, int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }
    int f_mx = 0, s_mx = 0;
    char ch;
    for (auto [key, val] : freq)
    {

        if (val > f_mx)
        {
            ch = key;
            f_mx = val;
        }
    }
    freq.erase(ch);
    for (auto [key, val] : freq)
    {

        if (val > s_mx)
        {

            s_mx = val;
        }
    }
    cout << f_mx + s_mx << endl;
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