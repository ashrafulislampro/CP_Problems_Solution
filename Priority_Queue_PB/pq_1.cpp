#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int long long

void solve()
{
    priority_queue<int> pq;
    // push -> add element 
    // pop -> delete element from last
    // top -> access last element

    pq.push(2);
    // {2}
    cout<<pq.top()<<endl;
    pq.push(1);
    // {1, 2}
    cout<<pq.top()<<endl;
    // {2}
    pq.pop();
    // {1}
    cout<<pq.top()<<endl;
    pq.push(3);
    // {1, 3}
    cout<<pq.top()<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();
    return 0;
}