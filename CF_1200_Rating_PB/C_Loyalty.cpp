#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m,a[100005],b[100005];
void doing(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	int l=1,r=n,x=0,t=0;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(x+a[r]<m) x+=a[l],b[i]=a[l++];
		else x+=a[r]-m,b[i]=a[r],t+=a[r--];
	}
	cout<<t<<"\n";
	for(int i=1;i<=n;i++) printf("%lld%c",b[i]," \n"[i==n]);
}
signed main(){
	int T;
	cin>>T;
	while(T--) doing();
}