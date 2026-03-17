#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct
{
    int x, y, z = 30;
    string name;
} ash;

struct Student
{
    string name;
    double cgpa;
    int roll;
};

void solve()
{
    ash.x = 10, ash.y = 20;
    ash.name = "Ashraful";
    cout << ash.name << ' ' << ash.x << ' ' << ash.y << ' ' << ash.z << endl;

    Student obj;
    obj.name = "Akib";
    obj.cgpa = 3.5;
    obj.roll = 10;

    cout << obj.name << endl;
    cout << obj.cgpa << endl;
    cout << obj.roll << endl;
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