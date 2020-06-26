class Solution {
public:
    
    int thirdMax(vector<int>& nums) {
        //if(nums[i]!=nums[i+1]){
        int max =nums[0], second = nums[0], third = nums[0];
        int n = nums.size();
        sort(nums.begin(),nums.end() );
        vector<int> copy;
        
        for ( int i = 0; i<n;i++) {
            if ((nums[i] == nums[i+1]) && (i <= n-2))
                continue;
            copy.push_back(nums[i]);
        }
        if (copy.size() >=3 ) return copy[copy.size()-3];
        return copy[copy.size()-1];
    }
};