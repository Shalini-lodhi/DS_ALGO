int maxSubsequenceSubstring(string X, string Y, int N, int M){
    int t[N+1][M+1];
    for(int i=0; i<=N; i++) t[i][0]=0;
    for(int i=0; i<=M; i++) t[0][i]=0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            if(X[i-1]==Y[j-1]) 
            {
                t[i][j]=1+t[i-1][j-1];
            }    
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }int ans=0;
    for(int i=0; i<=M; i++){
        ans=max(ans, t[N][i]);
    }
    return ans;
}
