#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin>>a>>b;
	
	int rem = b - a;
	if(rem >= a){
	    cout<<a<<endl;
	}else{
	    cout<<a-rem<<endl;
	}
    return 0;
}
