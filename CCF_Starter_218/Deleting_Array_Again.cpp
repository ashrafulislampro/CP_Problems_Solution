#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> A, C;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        C.push_back(x);
    }
    int t_mn_cst = 0;
    while (A.size() > 0)
    {
        auto it = min_element(C.begin(), C.end());
        int mn_c = *it;
        int idx = it - C.begin();
        // cout << mn_c << " " << idx << endl;
        if (idx + 1 <= A.size())
        {
            t_mn_cst += mn_c * A[idx];
            A.erase(A.begin() + idx);
        }
        if (idx + 1 > A.size())
            C.erase(it);
    }
    cout << t_mn_cst << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}