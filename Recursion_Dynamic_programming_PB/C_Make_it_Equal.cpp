#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<int> a;
        multiset<int> b;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            x = x % k;
            if (x > k / 2)
            {
                x = k - x;
            }
            a.insert(x);
        }
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            x = x % k;
            if (x > k / 2)
            {
                x = k - x;
            }
            b.insert(x);
        }
        
        if (a == b)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}
