 int maximizeTheCuts(int n, int x, int y, int z)
    {
        int arr[3]={x,y,z};sort(arr,arr+3);
        int dp[4][n+1];
        //memset(dp,0,sizeof(dp));
        for(int i=0; i<=3; i++){
            for(int j=0; j<=n; j++){
                if(i==0){
                    dp[i][j]=-1e5;
                }else if(j==0){
                    dp[i][j]=0;
                }
                else if(arr[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=max(1+dp[i][j-arr[i-1]],dp[i-1][j]);
                }
            }
        }
        return (dp[3][n]<0)?0:dp[3][n];
    }