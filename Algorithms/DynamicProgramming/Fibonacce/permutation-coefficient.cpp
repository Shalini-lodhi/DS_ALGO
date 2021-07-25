void nPr(int n, int r)
{
    int i,j,mod=pow(10,9)+7;
    vector<vector<int>>dp(n+1,vector<int>(r+1,0));
    dp[0][0]=1;
    for(i=1;i<=r;i++)
    {
        dp[0][i]=0;
    }
    for(i=1;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=min(i,r);j++)
        {
			// P(n, k) = P(n-1, k) + k* P(n-1, k-1) 
            dp[i][j]=(dp[i-1][j]+(j*dp[i-1][j-1]))%mod;
        }
    }
	
		for(int i=0; i<=n; i++){
		for(int j=0; j<=r; j++){
			cout<<dp[i][j]<<", ";
		}cout<<endl;
	}
        cout<<n<<" P "<<r <<" = "<< dp[n][r]<<endl;
    }
