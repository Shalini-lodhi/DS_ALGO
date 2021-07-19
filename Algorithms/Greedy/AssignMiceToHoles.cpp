#include <bits/stdc++.h>
using namespace std;

void AssignMiceToHoles(int mice[], int holes[], int size){
	sort(mice, mice+size);
	sort(holes, holes+size);
	int ans=0;
	for(int i=0; i<size; i++){
		int temp=abs(mice[i]-holes[i]);
		ans=max(ans,temp);
	}
	cout<<"Max time: "<<ans;
}
int main(){
	int mice[]={-4,4,2};
	int holes[]={0,4,5};
	int size=sizeof(mice)/sizeof(mice[0]);
	AssignMiceToHoles(mice,holes,size);
	return 0;
}