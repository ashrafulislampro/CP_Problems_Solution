#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
struct Student
{
    int age, standard;
    string first_name, last_name;
};

void solve()
{
    Student obj;
    cin >> obj.age;
    cin >> obj.first_name;
    cin >> obj.last_name;
    cin >> obj.standard;

    cout << obj.age << ' ' << obj.first_name << ' ' << obj.last_name << ' ' << obj.standard << endl;
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