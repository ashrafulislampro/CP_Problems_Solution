#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> sk;
    deque<char> q;
    for (auto &it : s)
    {
        if (sk.empty())
        {
            sk.push(it);
        }
        else if (sk.top() == it)
        {
            sk.pop();
        }
        else
        {
            sk.push(it);
        }
    }
    while (!sk.empty())
    {
        char it = sk.top();
        q.push_front(it);
        sk.pop();
    }
    for (auto &it : q)
    {
        cout << it;
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}