#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr;
    for (int i = 1; i <= n;)
    {
        if(i < l or i > r)
            arr.push_back(i++);
        else{
            while(r != l){
                arr.push_back(r--);
                i++;
            }
            arr.push_back(l);
            i++;
        }
    }

   
    for (auto val : arr)
    {
        cout << val << " ";
    }
}
int main()
{
    ASHRAFUL

    solve();

    return 0;
}
// Coded by Ashraful Islam @ml.ashraful37