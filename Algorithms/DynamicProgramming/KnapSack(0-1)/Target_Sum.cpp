int subsetsumcount(vector<int>& a, int target){
        
        int n=a.size(),m=target;
        int dp[n + 1][ m + 1];
        
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        
        for(int i=1;i<=m;i++){
            dp[0][i]=0;
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<=m;j++){
                
                if(a[i-1]<=j){
                    dp[i][j]=dp[i-1][j-a[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j]= dp[i-1][j];
                }
            }
        }
        
        return dp[n][m];
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        
        int ourtarget = (sum +S)/2;
        
        if((sum + S) & 1 || sum<S) return 0;
        return subsetsumcount(nums,ourtarget);
    }