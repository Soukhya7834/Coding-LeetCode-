class Solution {
public:
    int findMin(vector<int>& nums) {
        
        vector<int> vec = nums;
        sort(vec.begin(), vec.end());
        int target = vec[0];
        int index = search(nums, target);
        return  nums[index];
        
    }
    
int search(vector<int>& nums, int target) {
    int lo = 0, hi = nums.size();
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        
        double num = (nums[mid] < nums[0]) == (target < nums[0])
                   ? nums[mid]
                   : target < nums[0] ? -INFINITY : INFINITY;
                   
        if (num < target)
            lo = mid + 1;
        else if (num > target)
            hi = mid;
        else
            return mid;
    }
    return -1;
}
    
};
