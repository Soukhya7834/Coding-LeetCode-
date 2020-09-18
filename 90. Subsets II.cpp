class Solution {
public:
    void fun(vector<int>& nums, int i, vector<int>& subs, vector<vector<int>>& ans) {
        
        ans.push_back(subs);
        
        for (int j = i; j < nums.size(); j++) {
            if(j == i || nums[j] != nums[j - 1]) {
                subs.push_back(nums[j]);
                fun(nums, j + 1, subs, ans);
                subs.pop_back();
            }
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> subs;
        fun(nums, 0, subs, ans);
        return ans;
    }
};
    
    
   
