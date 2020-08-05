class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> out;
        for(int i=0;i<nums.size();i++){
            auto it = out.begin() + index[i] ;
            auto newIt = out.insert(it, nums[i]);
        }
            
        return out;
    }
};
