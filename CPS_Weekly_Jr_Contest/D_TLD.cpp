#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    stringstream ss(str);
    string word;
    vector<string> result;
    while (getline(ss, word, '.'))
    {
        result.push_back(word);
    }

    cout << result[result.size() - 1] << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}