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

using ll = long long;
const ll inf = (ll)1e18;
const ll N = (ll)3e5 + 5;
const ll mod = (ll)1e9 + 7;
const int MAX_VAL = 100005;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

// DSU structure
struct DSU
{
    vector<int> parent;
    vector<int> size;

    // it's similar to make_set function
    DSU(int n)
    {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
        size.assign(n, 1);
    }

    void make_set(int v)
    {
        parent[v] = v;
        size[v] = 1;
    }

    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);

        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

void solve(int case_num)
{
    int a, b, c, i, j, k, m, n, q, o, x, y, z;
    cin >> n >> q;

    vector<int> arr(n + 1);
    DSU dsu(n+1);

    // Maps a value to its current DSU root index
    vector<int> value_to_root(MAX_VAL, -1);
    // Maps a DSU root index to its current value
    vector<int> root_to_value(n+1, -1);

    // input array
    for(int i = 1; i <= n; ++i){
        cin>>arr[i];
        if(value_to_root[arr[i]] == -1){
            value_to_root[arr[i]] = i;
            root_to_value[i] = arr[i];
        }else{  
            // if the value already has a set, merge this index into it
            dsu.union_set(value_to_root[arr[i]], i);
        }
    }

    cout<<"Case "<<case_num<<":\n";
    while(q--){
        int type;
        cin>>type;
        if(type == 1){
            int x, y;
            cin>>x>>y;
            if(x == y || value_to_root[x] == -1)continue;

            int root_x = dsu.find_set(value_to_root[x]);

            if(value_to_root[y] == -1){
                // Case A: Target value y does not exist yet
                value_to_root[y] = root_x;
                root_to_value[root_x] = y;
                value_to_root[x] = -1;
            }else{
                // Case B: Both value exist: merge their sets

                int root_y = dsu.find_set(value_to_root[y]);

                dsu.union_set(root_x, root_y);

                // find the new combined root
                int new_root = dsu.find_set(root_x);
                root_to_value[new_root] = y;

                value_to_root[y] = new_root;
                value_to_root[x] = -1;
            }

        }else{
            int idx;
            cin>>idx;
            int root = dsu.find_set(idx);
            cout<<root_to_value[root]<<"\n";
        }
    }
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
Input:
1
5 4
1 2 3 4 5
1 1 3
2 1
1 3 5
2 1

Output:
Case 1:
3
5

https://toph.co/p/unbelievable-array
*/