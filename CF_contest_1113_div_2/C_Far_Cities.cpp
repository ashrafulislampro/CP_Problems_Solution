#include <bits/stdc++.h>
using namespace std;
#define  enl          '\n'
#define  int          long long
#define  sz(s)        (int)s.size()
#define  all(v)       (v).begin(),(v).end()

bool query(int u, int v, int d) {
    cout<<"? "<<u<<' '<<v<<' '<<d<<endl;

    bool greater;
    cin>>greater;

    return greater;
}

void print(int u, int v, int d) {
    cout<<"! "<<u<<' '<<v<<' '<<d<<endl;
}

void solve() {
    int n;
    cin>>n;

    int first_farthest = 2, distance = 2;
    for(int i=2;i<=n;i++) {
        while(query(1, i, distance)) {
            first_farthest = i;
            distance++;
        }
    }

    int second_farthest = 1;
    for(int i=1;i<=n;i++) {
        if(i == first_farthest) continue;
        while(query(i, first_farthest, distance)) {
            second_farthest = i;
            distance++;
        }
    }

    print(first_farthest, second_farthest, distance-1);
}

signed main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int testcases = 1;
    cin>>testcases;
    while(testcases--) {
        solve();
    }

    return 0;
}