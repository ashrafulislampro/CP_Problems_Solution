#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s, curr;
    cin >> s;
    int ans = 1;
    set<char> found_char;
    stack<string> each_good_sec;
    for(auto c : s){
        if(c == '('){
            each_good_sec.push(curr);
            curr = "";
        }else if(c == ')'){
            for(auto x : curr){
                found_char.erase(x);
            }
            curr = each_good_sec.top();
            each_good_sec.pop();
        }else{
            if(found_char.count(c)){
                ans = 0;
                break;
            }
            found_char.insert(c);
            curr += c;
        }
    }
    if (ans)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    solve();
    return 0;
}