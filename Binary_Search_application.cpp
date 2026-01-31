#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
void solve()
{
    int n = 20, target = 72;
    int arr[] = {3, 6, 9, 12, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 72, 75, 78, 80};
    int low = 0, high = n - 1;
    int ans;
    while (high >= low)
    {
        int mid = low + (high - low) / 2;
        cout << low << " " << high << " " << mid << " ";
        if (target == arr[mid])
        {
            ans = mid;
            break;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        cout << low << " " << high << endl;
    }
    cout << endl;
    cout << ans << endl;
}
int main()
{
    ASHRAFUL

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}