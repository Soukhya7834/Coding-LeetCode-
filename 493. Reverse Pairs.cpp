class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int n = nums.length();
        mergesort(nums, 0, n-1);
        
        
        
        
        mergesortvector<(int> nums, int lo, int hi){
            (lo >= hi) return 0;
            int count = 0;
            int mid = (lo+(hi-lo))/2;
            count += mergesort(nums , lo, mid );
            count += mergesort(nums , mid+1, hi );
            
        }
    }
    
    int merge(vector<int> nums, int lo, int mid, int hi){
        vector<int> temp;
        int p=lo, q= mid+1;
        while(p < mid && q < hi){
        if(nums[p] > 2* nums[q])
            temp[k++] = nums[p++];
        else
            temp[k++] = nums[q++];
            
        }
        temp[k++] = nums[p++];
        
        temp[k++] = nums[q++];
            
};
