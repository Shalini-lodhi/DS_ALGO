
class Solution{
public:
     int dp[502][502];
    bool isPalindrome(string s,int i,int j) 
    {
        // int i=0, j=s.length()-1;
        while(i<=j)
            if(s[i++] != s[j--])
                return false;
        return true;
    }
    int solve(string s,int i,int j)
    {
        if(i>=j || isPalindrome(s,i,j))
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int ans = INT_MAX;
        for(int k=i;k<=j;k++) {
            string t = s.substr(i,k-i+1);
            if(isPalindrome(t,0,t.length()-1)) {
                int temp = solve(s,k+1,j);
                ans = min(ans,temp+1);
            }
        }
        return dp[i][j] = ans;
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        return  solve(str,0,str.length()-1);
    }
};
