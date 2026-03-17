#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct Point
{
    double x, y;
    double distancef0()
    {
        return sqrt(x * x + y * y);
    }

    double distance(Point &other)
    {
        double dx = x - other.x;
        double dy = y - other.y;

        return sqrt(dx * dx + dy * dy);
    }
};
void solve()
{
    Point arr[100];

    arr[10].x = 3;
    arr[10].y = 5;

    arr[9].x = 1;
    arr[9].y = 1;

    cout << arr[10].distancef0() << endl;
    cout << arr[9].distance(arr[10]) << endl;
    cout << arr[10].distance(arr[9]) << endl;
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
// Coded by Ashraful Islam @ml.ashraful37