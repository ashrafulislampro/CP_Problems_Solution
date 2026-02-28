#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &arr, int k)
    {
        long long sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

       
        long long mn = 0, tmp = 0;
        for (int i = 0; i < n - k; i++)
        {
            tmp += arr[i];
        }
       
        mn = tmp;

        for (int i = 1; i < k; i++)
        {
            tmp -= arr[i - 1];            
            tmp += arr[i + n - k - 1];           
            mn = min(mn, tmp);            
        }

        return sum - mn;
    }
};

int main()
{
    Solution obj;
    vector<int> arr = {1, 79, 80, 1, 1, 1, 200, 1};
    cout << obj.maxScore(arr, 3) << endl;

    return 0;
}