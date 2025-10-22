#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string s, string p)
{
    string str = s + p;
    int len = str.size();
    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<string> str(n);
    for (auto &x : str)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;

            if (is_palindrome(str[i], str[j]))
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}