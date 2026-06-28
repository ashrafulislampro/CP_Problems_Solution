#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

using namespace std;
#define ft first
#define sd second
#define pb(x) push_back(x)
#define ph(x) push(x)
#define pp() pop()
#define sz() size()
#define pll pair<ll, ll>
#define pch pair<int, char>

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)2e5 + 5;
const ll mod = (ll)1e9 + 7;
const int MAX_VAL = 200005;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// DSU structure
vector<ll> parent(N);
vector<ll> sz_f(N);
struct DSU
{
    void make_set(ll v)
    {
        parent[v] = v;
        sz_f[v] = 1;
    }

    ll find_set(ll v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(ll a, ll b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
        {
            if (sz_f[a] < sz_f[b])
                swap(a, b);
            parent[b] = a;
            sz_f[a] += sz_f[b];
        }
    }
};

void solve(int case_num)
{
    ll a, b, c, i, j, k, m, n, q, o, x, y, z;

    string ss;
    cin >> ss >> q;
    vector<pch> arr;
    
    DSU dsu;
    // input query
    for(i = 1; i <= q; i++){
        cin>>x>>y;
        if(x == 2){
            arr.push_back({y, ss[y]});
            ss[y] = '#';
        }else{
            arr.push_back({y, '0'});
        }
    }

    // make set
    for(i = 0; i <= ss.sz(); i++){
        dsu.make_set(i);
    }

    // union set
    for(i = 0; i < ss.sz()-1; i++){
        if(ss[i] == '#')continue;
        if(ss[i] == ss[i+1])
            dsu.union_set(i, i+1);
    }

    // ans store
    vector<ll> ans;
    for(i = arr.sz()-1; i >= 0; i--){
        ll idx = arr[i].ft;
        ll ch = arr[i].sd;

        if(ch == '0'){
            ll root_ch = dsu.find_set(idx);
            ans.push_back(sz_f[root_ch]);
        }else{
            ss[idx] = ch;

            if(idx + 1 < ss.sz() && ss[idx] == ss[idx+1])
                dsu.union_set(idx, idx+1);
            
            if(idx - 1 >= 0 && ss[idx] == ss[idx-1])
                dsu.union_set(idx, idx-1);
        }
    }

    reverse(ans.begin(), ans.end());
    cout<<"Case "<<case_num<<": \n";
    for(auto it: ans)
        cout<<it<<"\n";

}
int main()
{
    ASHRAFUL
    int t = 1;
    if (cin >> t)
    {
        for (int i = 1; i <= t; ++i)
        {
            solve(i);
        }
    }

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37


/*
Sample Input:
2
AABBBCCCC
5
1 0
2 1
1 0
2 2
1 3
XXYYY
3
1 3
2 3
1 2

Sample Output:
Case 1:
2
1
2
Case 2:
3
1

https://www.spoj.com/problems/CONSEC/
*/
