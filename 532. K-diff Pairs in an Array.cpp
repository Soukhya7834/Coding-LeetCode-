class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        int count =0, i;
        sort(nums.begin(), nums.end());
        //for(int i = 0;i<n;i++){
              while(i!=n){
                if(nums[i] != nums[i+1]){
                    int j = nums[i]+k;
                    for (int k = i+1;k<n;k++){
                        if(nums[k]==j)
                            count++;
                    }
                }
                else 
                    i++;
                
            }
            
        return count;
        
    }
};