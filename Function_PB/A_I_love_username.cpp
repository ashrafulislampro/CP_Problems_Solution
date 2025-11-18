#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int amazing(int k)
{
    int mn = v[0];
    int mx = v[0];
    for (int i = 1; i < k; i++)
    {
        if (mn > v[i])
            mn = v[i];
        if (mx < v[i])
            mx = v[i];
    }
    if (v[k] < mn || v[k] > mx)
        return 1;
    return 0;
}
// void solve()
// {
//     int n, ans = 0, x;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x;
//         v.push_back(x);
//     }

//     for (int i = 1; i < n; i++)
//     {
//         ans += amazing(i);
//     }
//     cout << ans << endl;
// }
void solve()
{
    int n, ans = 0;
    cin >> n;

    vector<int> vec(n);
    for (auto &x : vec)
        cin >> x;

    for (int i = 1; i < n; i++)
    {
        int mn = *min_element(vec.begin(), vec.begin() + i);
        int mx = *max_element(vec.begin(), vec.begin() + i);
        // cout << vec[i] << " " << mn << "," << mx << endl;
        if ((vec[i] < mn) || (vec[i] > mx))
        {
            ans++;
        }
    }
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}