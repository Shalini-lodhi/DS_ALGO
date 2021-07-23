 int LCS(string s1, string s2, int n, int m){
        int t[n+1][m+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(s1[i-1]==s2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                else{
                    t[i][j]=max(t[i][j-1], t[i-1][j]);
                }
            }
        }
        int len= t[n][m];
   return n-len;
    }
    int longestPalindromeSubseq(string s) {
     string org_s=s;
    reverse(s.begin(), s.end());
        int sz=s.size();
        return LCS(org_s, s, sz, sz);
    }
