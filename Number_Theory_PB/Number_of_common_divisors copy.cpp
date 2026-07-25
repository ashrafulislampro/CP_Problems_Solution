#include <bits/stdc++.h>
int gcd(int a,int b)
{
	
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int main(void) {
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++)
	{
		int a,b,cd=0;
		scanf("%d%d",&a,&b);
		int n = gcd(a,b);
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
				if(n/i==i)
					cd+=1;
				else
					cd+=2;
			}
		}
		printf("%lld\n",cd);
	}
	return 0;
}