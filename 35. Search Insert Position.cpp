class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        
        int low=0, high=n-1, mid=0;
        //mid = (low + (high-low))/2;
        
        while(low < high){
            mid = low + (high-low)/2;

            if(nums[mid] == target)
                return mid;
            if(target < nums[mid])
                high = mid-1;
            else
                low=mid+1;
        }     
        
        return low;
    }
};
