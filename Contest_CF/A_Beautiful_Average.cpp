#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max_val = 0;

    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] != arr[j])
                break;
            cnt++;
            tmp += arr[j];
        }
        int curr_val = tmp / cnt;
        if (curr_val > max_val)
            max_val = curr_val;
    }
    cout << max_val << endl;
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