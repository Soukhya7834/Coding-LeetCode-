// 219. Contains Duplicate II


/*public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int i,j, diff;
        for(i=0; i<n ; i++){
            for(j = i+1; j<n ; j++){
                if(nums[i]==nums[j]){
                    diff =  j-i;
                }
                if(diff <= k)
                    return true;
                else 
                    return false;
                
            }
            //i++;
        }
    }
};  */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int i,j, diff, index;
        if ( (k-1) > n-1)
            index = n-1;
        else
            index = k-1;
        
        for(i=index; i<n ; i++){
            for(j = 0; j<i; j++){
                if((nums[i]==nums[j]) && (i!=j)){
                    diff =  i-j;
                    if (diff <= k)
                        return true;
                }
            }
        }
        return false;
    }
};