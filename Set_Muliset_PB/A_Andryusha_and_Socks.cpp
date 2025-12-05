#include <bits/stdc++.h>
using namespace std;
int n, a[100005], A, i, x;
int main()
{
    for (cin >> n, n *= 2; n; n--)
    {
        cin >> x;
        a[x]++;
        i += (a[x] == 1 ? 1 : -1);
        A = max(A, i);
    }
    cout << A << endl;

    return 0;
}