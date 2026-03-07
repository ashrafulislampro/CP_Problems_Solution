#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestNiceSubarray(vector<int> &nums)
    {
        int maxLen = 1;
        for (int start = 0; start<nums.size()-maxLen; start++)
        {
            int currLen = 1;
            int usedBits = nums[start];

            for (int end = start + 1; end < nums.size(); end++)
            {
                if ((usedBits & nums[end]) == 0)
                {
                    usedBits |= nums[end];
                    currLen++;
                }
                else
                    break;
                
            }
            maxLen = max(maxLen, currLen);
        }

        return maxLen;
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    cout << obj.longestNiceSubarray(v) << endl;
    return 0;
}