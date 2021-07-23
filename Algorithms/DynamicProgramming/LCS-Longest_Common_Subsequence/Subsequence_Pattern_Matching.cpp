bool longestCommonSubsequence(string text1, string text2) {
        int sz1=text1.length(), sz2=text2.length();
        int t[sz1+1][sz2+1];
        for(int i=0; i<=sz1; i++){
            for(int j=0; j<=sz2; j++){
                if(i==0||j==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1; i<=sz1; i++){
            for(int j=1;j<=sz2; j++){
                if(text1[i-1]==text2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else 
                    t[i][j]=max(t[i-1][j], t[i][j-1]);
            }
        }
        int len= t[sz1][sz2];
        if(sz1==len)
          return true;
        else
          return false;
    }
