#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans =2;//least subarray
	int pd=a[1]-a[0]; //previous difference
	int j=2;//smallest array
	int current=2; //current difference
	while(j<n){
		if(pd==a[j]-a[j-1]){
			current++;
		}
		else{
			pd=a[j]-a[j-1];
			current=2;
		}
		ans=max(ans, current);
		j++;
	}
	cout<<ans<<endl;
	return 0;
}