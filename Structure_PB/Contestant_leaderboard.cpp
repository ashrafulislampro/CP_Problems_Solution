#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ASHRAFUL                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);

struct Team
{
    string t_name;
    int solved, penalty;
    void is_qualified(int slv)
    {
        if (slv >= 3)
        {
            cout << "Is Qualified";
        }
        else
        {
            cout << "Is not Qualified";
        }
    }
};
bool custom_cmp(Team &a, Team &b)
{
    if (a.solved == b.solved)
        return a.penalty < b.penalty;
    return a.solved > b.solved;
}
void solve()
{
    Team arr[5], obj;

    // input
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i].t_name >> arr[i].solved >> arr[i].penalty;
    }
    sort(arr, arr + 5, custom_cmp);

    cout << "LEADERBOARD" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].t_name << " " << arr[i].solved << " " << arr[i].penalty << " ";
        obj.is_qualified(arr[i].solved);
        cout << endl;
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