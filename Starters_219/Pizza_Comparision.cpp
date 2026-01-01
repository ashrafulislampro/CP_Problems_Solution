#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t = 1;
    cin >> t;
    while (t--)
    {
        double A, B;
        cin >> A >> B;
        double rem_a = A * 1.0 / 100;
        double rem_b = B * 1.0 / 225;

        if (rem_a < rem_b)
        {
            cout << "Small" << endl;
        }
        else if (rem_b < rem_a)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}
