class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i=0;
        vector<int> out;
        for(int i=0; i<nums.size(); i+=2){
            for(int j=0;j< nums[i]; j++)
                out.push_back(nums[i+1]);
        }
        return out;
    }
};
