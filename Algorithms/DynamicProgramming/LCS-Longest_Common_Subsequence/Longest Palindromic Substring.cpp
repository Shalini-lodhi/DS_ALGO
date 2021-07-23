 string longestPalindrome(string s1) {
        string original=s1;
        reverse(s1.begin(), s1.end());
        int sz=s1.size();
        int dp[sz+1][sz+1];
        for(int i=0; i<=sz; i++) dp[i][0]=0;
        for(int i=0; i<=sz; i++) dp[0][i]=0;

        for(int i=1; i<=sz; i++){
            for(int j=1; j<=sz; j++){
                if(original[i-1]==s1[j-1])
                    {
                        dp[i][j]=1+dp[i-1][j-1];
                    }
                else
                    dp[i][j]=0;
            }
        }
        string ans="";
        int i=sz, j=sz;
        while(i!=0 && j!=0){
            if(original[i-1]==s1[j-1])
               { ans+=original[i-1];
                i--; j--;}
            else {
                if(dp[i][j-1]>dp[i-1][j])
                    j--;
                else 
                    i--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
