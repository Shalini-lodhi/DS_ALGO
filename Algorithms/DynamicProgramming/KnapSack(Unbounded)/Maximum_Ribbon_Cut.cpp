int maxProduct(int n)
	{
	    int dp[n][n+1];
	    for(int i=0;i<n+1;i++)
            dp[0][i]=1;
        for(int i=1;i<n;i++)
            dp[i][0]=1;
	    for(int i=1; i<n; i++){
	        for(int j=1; j<n+1; j++){
	           if(i>j){
	                dp[i][j]=dp[i-1][j];}
	           else {
	               dp[i][j]=max((i*(dp[i][j-i])),dp[i-1][j])%1000000007;}
	        }
	    }
	    return dp[n-1][n];
	}
