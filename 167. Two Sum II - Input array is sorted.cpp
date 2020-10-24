class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> indices;
        map <int, int>::iterator it;
        
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                cout << indices[target - nums[i]] << " " << i;
                return {(indices[target - nums[i]])+1, i+1};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};
