class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        int i, flag = -1;
        for(i=0;i<n ;i++){
            temp.push_back(nums[i]);
        }
        sort(nums.begin(), nums.end());
        int max = nums[n-1];
        int db = max/2;
        
        for(i=0;i<n ;i++){
            if(temp[i] == db)
                flag = i;
        }
        
            
        if(flag != -1)
            return true;
        else
            return false;   
    }
};