int countWays(string S1, string S2){
       int m = S1.length();
int n = S2.length();
int dp[m + 1][n + 1];

for(int i = 0; i <= m; i++)
dp[i][0] = 1;
for(int j = 1; j <= n; j++)
dp[0][j] = 0;

for(int i = 1; i <= m; i++){
for(int j = 1; j <= n; j++){
if(S1[i - 1] == S2[j - 1])
dp[i][j] = dp[i - 1][j - 1] + dp[ i - 1][j];
else
dp[i][j] = dp[i - 1][j];
}
}

return dp[m][n];
    }
