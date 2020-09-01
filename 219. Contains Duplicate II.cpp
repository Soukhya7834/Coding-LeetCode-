class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        
        for(int i=0; i< nums.size(); i++){
            if(m.count(nums[i]) == 0)           //maintain count of indeex, not the freq
                m[nums[i]] = i;
            else if ((i - m[nums[i]]) <= k)   
                return true;
            else
                m[nums[i]] = i;         //update the recent most val of i
        }
        return false;

    }
};
