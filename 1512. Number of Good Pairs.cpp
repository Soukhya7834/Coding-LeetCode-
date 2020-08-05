class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int freq[101] = {0};
        int sum =0;
        
        
        for(int i=0;i< nums.size(); i++){
             sum += freq[nums[i]];
             ++freq[nums[i]] ;
           
        }
        return sum;
    }
};
