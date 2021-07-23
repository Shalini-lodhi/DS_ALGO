int lengthOfLIS(vector<int>& nums) {
        int sz=nums.size();
        vector<int> lis(sz, 1);
        for (int i = 1; i < sz; i++) {
            for (int j = 0; j < i; j++)
                if (nums[i] > nums[j] && lis[i] < lis[j] + 1)
                    lis[i] = lis[j] + 1;
        }int ans;
        for(int i=0; i<sz; i++){
            ans=max(ans, lis[i]);
        }
        return ans;
    }
