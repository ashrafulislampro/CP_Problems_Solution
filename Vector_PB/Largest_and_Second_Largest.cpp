#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        sort(a, a+n);
        int h = a[n-1], l;
        for(int i = n -1; i >= 0; i--){
            if(a[i] < h){
                l = a[i];
                break;
            }
        }
        cout<<l + h<<endl;
    } 
    return 0;
}
