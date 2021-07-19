//printing of all subarrays in the given array
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int count=0;
	while(count<n){
		for(int i=count; i<n;i++){
			for(int j=count;j<i;j++){
				cout<<a[j]<<" ";
			}
			cout<<"\n";
		}
	count++;	
	}
	return 0;
}