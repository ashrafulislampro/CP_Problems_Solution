#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> arr;
        map<char, int> frq1, frq2;
        int len = p.size();
        for (int i = 0; i < len; i++)
        {
            frq1[p[i]]++;
        }

        for (int i = 0; i < len; i++)
        {
            frq2[s[i]]++;
        }

        bool flg = true;
        for (int i = 0; i < len; i++)
        {
            if (frq2[p[i]] < frq1[p[i]])
            {
                flg = false;
                break;
            };
        }
        int sz = s.size();
        if (flg)
            arr.push_back(0);
        for (int i = 1; i <= sz - len; i++)
        {
            frq2[s[i - 1]]--;
            frq2[s[i + len - 1]]++;

            flg = true;
            for (int i = 0; i < len; i++)
            {
                if (frq2[p[i]] < frq1[p[i]])
                {
                    flg = false;
                    break;
                };
            }
            if (flg)
                arr.push_back(i);
        }

        return arr;
    }
};