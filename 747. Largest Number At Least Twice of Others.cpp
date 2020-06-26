class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        int i, bet, flag =-1;
        for(i=0;i<n ;i++){
            temp.push_back(nums[i]);
        }
        sort(nums.begin(), nums.end());
        int max = nums[n-1];
        int half = max/2;
        
        if(nums[n-2]<=half){
            flag = 1;
            for(i=0;i<n ;i++){
                if(temp[i] == max)
                    bet = i;     
            }
        }
            
        if(flag != -1)
            return bet;
        else
            return -1;   
    }
};
