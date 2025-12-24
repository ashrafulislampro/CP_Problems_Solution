#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n;
    
    deque<int> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if(i % 2 == n % 2){
            q.push_front(x);
        }else{
            q.push_back(x);
        }
    }

    for (auto el : q)
    {
        cout << el << " ";
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