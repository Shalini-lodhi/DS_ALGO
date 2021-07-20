# UNBOUNDED KNAPSACK:
In un-bounded KnapSack, one can take the appropriate items more than once i.e multiple occurance; unlike 0-1 KnapSack.

### Genralised Code:
```sh
for(int i=1; i<arr.size()+1; i++){
	for(int j=1; j<N+1; j++){
		if(arr[i-1]<=j)
			dp[i][j]=(1+dp[i][j-arr[i-1]] || dp[i-1][j]);
		else
			dp[i][j]=dp[i-1][j];
	}
}
```

## Related Problems:
- Rod Cutting [GFG | DP-13](https://www.geeksforgeeks.org/cutting-a-rod-dp-13/)
-  Coin Change I - Max. no. of ways [GFG | DP-7](https://www.geeksforgeeks.org/coin-change-dp-7/)
-  Coin Change II - Min. no. of Coins [GFG](https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/)
-  Maximum Ribbon Cuts [GFG](https://practice.geeksforgeeks.org/problems/maximum-product-cutting4522/)
