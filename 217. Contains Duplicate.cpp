class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> m;
        
        for(auto i : nums)
            m[i]++;
        
        for (int i=0; i< nums.size(); ++i){
            cout << "i=" << i <<  "  ";
            if(m[nums[i]] >1)
                return true;
        }
        return false;
    }
};
