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
bool is_equal(Point a, Point b)
{
    if (a.x == b.x and a.y == b.y)
        return 1;
    else
        return 0;
}
void solve()
{
    Point arr[100]; // structure array declared

    arr[10].x = 3;
    arr[10].y = 5;

    arr[8].x = 1;
    arr[8].y = 1;

    arr[9].x = 1;
    arr[9].y = 1;

    if (is_equal(arr[8], arr[10]))
    {
        cout << "Is Same." << endl;
    }
    else
    {
        cout << "Is not Same" << endl;
    }
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