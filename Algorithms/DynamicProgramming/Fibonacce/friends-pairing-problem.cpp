#include <bits/stdc++.h>
using namespace std;
 int countFriendsPairings(int n)
{
long long t[n+1];
t[0]=0; t[1]=1;
t[2]=2;
for(int i=3;i<=n;i++)
t[i]=(t[i-1]+(i-1)*t[i-2])%1000000007;
	for(int i=0; i<=n; i++){
		cout<<t[i]<<" ";
	}cout<<endl;
return t[n];
}
int main()
{
    int n=6;
	cout<<countFriendsPairings(n);
    return 0;
}
