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
        int l = 0, r = nums.size()-1;
        
        while (l <= r) 
        {
            while (l < r && nums[l] == nums[l + 1]) l++; // skip duplicates from the left
            while (r > l && nums[r] == nums[r - 1]) r--; // skip duplicates from the right
            
            int mid = (l+r) / 2;
            
            if (target == nums[mid])
                return mid;
            
            // there exists rotation; the middle element is in the left part of the PIVOT
            if (nums[mid] > nums[r]) 
            {
                if (target < nums[mid] && target >= nums[l])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            // there exists rotation; the middle element is in the right part of the PIVOT
            else if (nums[mid] < nums[l]) 
            {
                if (target > nums[mid] && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            // there is no rotation; just like normal binary search
            else 
            {
                if (target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return -1;
    }
};
