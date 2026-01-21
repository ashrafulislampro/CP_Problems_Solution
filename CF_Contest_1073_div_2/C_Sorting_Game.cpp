#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool is_sorted(string &s){
    for(int i = 1; i < s.size(); i++)
        if(s[i] < s[i-1])
            return 0;
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;

    vector<int> play;
    if(is_sorted(s)){
        cout<<"Bob\n";
    }else{
        int ones = count(s.begin(), s.end(), '1'), zeros = n - ones;

        for(int i = 0; i < zeros; i++){
            if(s[i] == '1')
                play.push_back(i+1);
        }
        for(int i = zeros; i < n; i++){
            if(s[i] == '0')
                play.push_back(i+1);
        }

        cout<<"Alice\n"<<play.size()<<endl;
        for(int i = 0; i < play.size(); i++)
            cout<<play[i]<<" \n"[i+1 == play.size()];
    }
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}