class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int dp[n] ;
        dp[0] =  nums[0];
        int max = dp[0];
        
        for(int i=1;i<n;i++){
            dp[i] = nums[i]+(dp[i-1]>0 ? dp[i-1]: 0);
            max = max>dp[i]?max:dp[i];                                   
        }
        return max;
        
    }
};
