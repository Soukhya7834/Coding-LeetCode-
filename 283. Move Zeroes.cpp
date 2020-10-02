class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        vector<int> res;
        for(auto x: nums)
            if(x == 0)
                c++;
        for(auto x: nums)
            if(x != 0)
                res.push_back(x);
         
        while(c--)
            res.push_back(0);
        
        nums = res;
     
    }
};
