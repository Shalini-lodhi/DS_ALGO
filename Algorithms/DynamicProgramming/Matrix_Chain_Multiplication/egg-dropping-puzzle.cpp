class Solution
{
    public:
    int dp[201][201];
int p=0;
int eggDrop(int e, int f)
{
if(p==0) {memset(dp,-1,sizeof(dp)); p=1;}
if(e==1||f==0||f==1) return f;

if(dp[e][f]!=-1) return dp[e][f];

int mn=INT_MAX;
for(int k=1;k<=f;k++)
{
int temp=1+max(eggDrop(e-1,k-1),eggDrop(e,f-k));

mn=min(temp,mn);
}
return dp[e][f]=mn;
}
};
