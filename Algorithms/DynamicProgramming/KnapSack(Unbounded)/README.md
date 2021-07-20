UNBOUNDED KNAPSACK:
In un-bounded KnapSack, one can take the appropriate items more than once i.e multiple occurance; unlike 0-1 KnapSack.

Genralised Code:
for(int i=1; i<arr.size()+1; i++){
	for(int j=1; j<N+1; j++){
		if(arr[i-1]<=j)
			dp[i][j]=(1+dp[i][j-arr[i-1]] || dp[i-1][j});
		else
			dp[i][j]=dp[i-1][j];
	}
}